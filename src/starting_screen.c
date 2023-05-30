/*
** EPITECH PROJECT, 2022
** starting_screen.c
** File description:
** starting screen
*/

#include "../include/my.h"

void starting_screen(game *game)
{
    sprite sprite = sprite_starting_screen();
    sound sound = sound_starting_screen();
    time time = create_time(3);
    text text = text_starting_screen();
    while (game->esc == 0 && game->space == 0) {
        time_management_starting_screen(&time, &sprite, &text);
        render_starting_screen(game, sprite, text);
    } destroy_screen(&sprite, &text, &sound, &time);
    end_starting_screen(game);
}

void time_management_starting_screen(time *time, sprite *sprite, text *text)
{
    initialize_time(time);
    if (time->seconds[0] > 0.5) {
        gayardos_trainer_anim(sprite->sprite, 3);
        blinking_space(text->text, 0);
        sfClock_restart(time->clock[0]);
    }
    if (time->seconds[1] > 0.3) {
        ohoh_anim(sprite->sprite, 4);
        sfClock_restart(time->clock[1]);
    }
    if (time->seconds[2] > 0.01) {
        gayardos_rider_movement(sprite->sprite, 3);
        ohoh_movement(sprite->sprite, 4);
        sfClock_restart(time->clock[2]);
    }
}

void render_starting_screen(game *game, sprite sprite, text text)
{
    sfRenderWindow_display(game->window);
    sfRenderWindow_clear(game->window, sfBlack);
    render_sprite_starting_screen(game->window, sprite.sprite);
    sfRenderWindow_drawText(game->window, text.text[0], NULL);
    close_continue_starting_screen(game);
}

void close_continue_starting_screen(game *game)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(game->window, &event)) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            game->esc = 1;
        } if (sfKeyboard_isKeyPressed(sfKeySpace)) {
            game->space = 1;
        }
    }
}

void end_starting_screen(game *game)
{
    if (game->space == 1) {
        game->space = 0;
        game->esc = 0;
        game->score = 0;
        game_screen(game);
    } else {
        sfRenderWindow_destroy(game->window);
    }
}

/*
** EPITECH PROJECT, 2022
** game.c
** File description:
** game screen
*/

#include "../include/my.h"

void game_screen(game *game)
{
    sprite sprite = sprite_game_screen();
    sound sound = sound_game_screen();
    time time = create_time(10);
    text text = text_game_screen();
    while (game->esc == 0 && time.timer >= 0) {
        time_management_game_screen(&time, &sprite, &text, game);
        click_management_game_screen(&time, &sprite, game, sound);
        timer_spawn(game, &sprite, &sound, &time);
        render_game_screen(game, &sprite, text, sound);
    } destroy_screen(&sprite, &text, &sound, &time);
    end_game_screen(game);
}

void time_management_game_screen(time *time, sprite *sprite, text *text
    , game *game)
{
    initialize_time(time);
    if (time->seconds[0] > 1) {
        change_timer(&time->timer, text->text[0]);
        sfClock_restart(time->clock[0]);
    } if (time->seconds[1] > 0.1) {
        pikachu_animation(sprite->sprite, 3);
        snorlax_animation(sprite->sprite, 12);
        sfClock_restart(time->clock[1]);
    } if (time->seconds[5] > 0.2) {
        tiplouf_animation(sprite->sprite, 11);
        escargot_animation(sprite->sprite, 10);
        ohoh_anim(sprite->sprite, 4);
        charizard_animation(sprite->sprite, 5);
        sfClock_restart(time->clock[5]);
    } time_management_game_screen_2(time, sprite, text, game);
}

void render_game_screen(game *game, sprite *sprite, text text, sound sound)
{
    event_game_screen(game, sprite, sound);
    sfRenderWindow_display(game->window);
    sfRenderWindow_clear(game->window, sfBlack);
    render_sprite_game_screen(game->window, sprite->sprite);
    sfRenderWindow_drawText(game->window, text.text[0], NULL);
    sfRenderWindow_drawText(game->window, text.text[1], NULL);
}

void event_game_screen(game *game, sprite *sprite, sound sound)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(game->window, &event)) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            game->esc = 1;
        }
        if (sfMouse_isButtonPressed(sfMouseLeft) && game->click == 0) {
            sfSound_play(sound.sound[1]);
            game->click = 1;
            game->mousse = sfMouse_getPositionRenderWindow(game->window);
        }
    }
}

void end_game_screen(game *game)
{
    if (game->esc == 1) {
        sfRenderWindow_destroy(game->window);
    } else {
        game->space = 0;
        game->esc = 0;
        credit_screen(game);
    }
}

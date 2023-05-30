/*
** EPITECH PROJECT, 2022
** credit.c
** File description:
** credit
*/

#include "../include/my.h"

void credit_screen(game *game)
{
    sprite sprite = sprite_credit_screen();
    sound sound = sound_credit_screen(game);
    text text = text_credit_screen(*game);
    time time = create_time(4);
    while (game->esc == 0 && game->space == 0) {
        time_management_credit_screen(&time, &sprite, &text, game);
        render_credit_screen(game, sprite, text);
    }
    destroy_screen(&sprite, &text, &sound, &time);
    end_credit_screen(game);
}

void time_management_credit_screen(time *time, sprite *sprite, text *text
    , game *game)
{
    initialize_time(time);
    if (time->seconds[0] > 0.01) { movement_credit(sprite->sprite, 1);
        movement_credit(sprite->sprite, 2);
        movement_credit(sprite->sprite, 3);
        movement_credit(sprite->sprite, 4);
        movement_credit(sprite->sprite, 5);
        movement_credit(sprite->sprite, 6);
        movement_credit(sprite->sprite, 7);
        sfClock_restart(time->clock[0]);
    } if (time->seconds[1] > 0.1) { pikachu_animation(sprite->sprite, 1);
        escargot_animation(sprite->sprite, 3);
        snorlax_credit_animation(sprite->sprite, 4);
        sfClock_restart(time->clock[1]);
    } if (time->seconds[2] > 0.4) { gayardos_trainer_anim(sprite->sprite, 5);
        tiplouf_animation(sprite->sprite, 2);
        sfClock_restart(time->clock[2]);
    } if (time->seconds[3] > 0.25) { oh_ho_credit_animation(sprite->sprite, 7);
        charizard_animation(sprite->sprite, 6);
        sfClock_restart(time->clock[3]);
    }
}

void render_credit_screen(game *game, sprite sprite, text text)
{
    sfRenderWindow_display(game->window);
    sfRenderWindow_clear(game->window, sfBlack);
    render_sprite_credit_screen(game->window, sprite.sprite);
    sfRenderWindow_drawText(game->window, text.text[0], NULL);
    sfRenderWindow_drawText(game->window, text.text[1], NULL);
    sfRenderWindow_drawText(game->window, text.text[2], NULL);
    sfRenderWindow_drawText(game->window, text.text[3], NULL);
    close_credit_screen(game);
}

void close_credit_screen(game *game)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(game->window, &event)) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            game->esc = 1;
        }
        if (sfKeyboard_isKeyPressed(sfKeySpace)) {
            game->space = 1;
        }
    }
}

void end_credit_screen(game *game)
{
    if (game->space == 1) {
        game->space = 0;
        starting_screen(game);
    } else {
        sfRenderWindow_destroy(game->window);
    }
}

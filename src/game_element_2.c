/*
** EPITECH PROJECT, 2022
** game_element_2.c
** File description:
** game_element_2.c
*/

#include "../include/my.h"

void sprite_game_screen_2(sprite *sprite)
{
    escargot(sprite, 10);
    tiplouf(sprite, 11);
    snorlax(sprite, 12);
    background_hide_water(sprite, 13);
    water_splash(sprite, 14);
}

void time_management_game_screen_2(time *time, sprite *sprite, text *text
    , game *game)
{
    if (time->seconds[3] > 0.01) {
        pikachu_movement(sprite->sprite, 3);
        snorlax_movement(sprite->sprite, 12, game);
        ohoh_movement_game(sprite->sprite, 4);
        charizard_movement_game(sprite->sprite, 5);
        escargot_movement(sprite->sprite, 10);
        tiplouf_movement(sprite->sprite, 11);
        sfClock_restart(time->clock[3]);
    } change_score(game->score, text->text[1]);
    cursor_position(game, sprite, 2);
}

void sound_game_screen_2(sound *sound)
{
    sfSound_setVolume(sound->sound[2], 50);
    sfSound_setVolume(sound->sound[3], 50);
    sfSound_setVolume(sound->sound[4], 50);
    sfSound_setVolume(sound->sound[5], 60);
    sfSound_setVolume(sound->sound[6], 60);
    sfSound_setVolume(sound->sound[7], 80);
    sfSound_setVolume(sound->sound[8], 80);
    sfSound_setVolume(sound->sound[9], 70);
}

void click_management_game_screen_2(time *time, sprite *sprite
    , game *game, sound sound)
{
    if (time->seconds[9] > 0.08 && game->splash > 0) {
        if (game->splash == 1) sfSound_play(sound.sound[9]);
        activate_splash(sprite, game);
        sfClock_restart(time->clock[9]);
    }
}

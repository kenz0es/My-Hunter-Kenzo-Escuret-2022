/*
** EPITECH PROJECT, 2022
** game_animation_2.c
** File description:
** game animation 2
*/

#include "include/my.h"

void activate_flash(sprite *sprite, game *game)
{
    sfVector2f pos = {5000, 5000};
    if (game->catch < 8) {
        game->catch += 1;
        flash_animation(sprite->sprite, 6);
    } else {
        game->catch = 0;
        sfSprite_setPosition(sprite->sprite[6], pos);
        flash_animation(sprite->sprite, 6);
    }
}

void smoke_animation(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 1250) {
        rect.left = 30;
    } else {
        rect.left += 140;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

void activate_smoke(sprite *sprite, game *game)
{
    sfVector2f pos = {5000, 5000};
    if (game->miss < 10) {
        game->miss += 1;
        smoke_animation(sprite->sprite, 9);
    } else {
        game->miss = 0;
        sfSprite_setPosition(sprite->sprite[9], pos);
        smoke_animation(sprite->sprite, 9);
    }
}

void escargot_animation(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 300) {
        rect.left = 0;
    } else {
        rect.left += 60;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

void tiplouf_animation(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 40) {
        rect.left = 0;
    } else {
        rect.left += 19;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

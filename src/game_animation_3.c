/*
** EPITECH PROJECT, 2022
** game_animation_3.c
** File description:
** game animation 3
*/

#include "../include/my.h"

void snorlax_animation(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 400) {
        rect.left = 0;
    } else {
        rect.left += 99;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

void water_splash_animation(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 2000) {
        rect.left = 0;
    } else {
        rect.left += 199;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

void activate_splash(sprite *sprite, game *game)
{
    sfVector2f pos = {5000, 5000};
    if (game->splash < 12) {
        game->splash += 1;
        water_splash_animation(sprite->sprite, 14);
    } else {
        game->splash = 0;
        sfSprite_setPosition(sprite->sprite[14], pos);
    }
}

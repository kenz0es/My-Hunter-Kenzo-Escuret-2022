/*
** EPITECH PROJECT, 2022
** game_animation.c
** File description:
** game animation
*/

#include "../include/my.h"

void pikachu_animation(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 250) {
        rect.left = 0;
    } else {
        rect.left += 50;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

void dresseur_animation(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 528) {
        rect.left = 0;
    } else {
        rect.left += 180;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

void activate_dresseur(sprite *sprite, game *game)
{
        game->click += 1;
        dresseur_animation(sprite->sprite, 1);
}

void charizard_animation(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 194) {
        rect.left = 2;
    } else {
        rect.left += 64;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

void flash_animation(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 700) {
        rect.left = 0;
    } else {
        rect.left += 100;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

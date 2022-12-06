/*
** EPITECH PROJECT, 2022
** credit_animation.c
** File description:
** credit animation
*/

#include "include/my.h"

void snorlax_credit_animation(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 700) {
        rect.left = 0;
    } else {
        rect.left += 100;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

void oh_ho_credit_animation(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 130) {
        rect.left = 0;
    } else {
        rect.left += 65;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

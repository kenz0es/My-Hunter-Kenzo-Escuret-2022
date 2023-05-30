/*
** EPITECH PROJECT, 2022
** starting_screen_animation.c
** File description:
** starting screen animation
*/

#include "../include/my.h"

void gayardos_trainer_anim(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 501) {
        rect.left = 0;
    } else {
        rect.left += 167;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

void ohoh_anim(sfSprite **pokemon, int index)
{
    sfIntRect rect = sfSprite_getTextureRect(pokemon[index]);
    if (rect.left >= 122) {
        rect.left = 0;
    } else {
        rect.left += 61;
    }
    sfSprite_setTextureRect(pokemon[index], rect);
}

void blinking_space(sfText **text, int index)
{
    sfVector2f pos = sfText_getPosition(text[index]);
    sfVector2f offset;
    offset.y = 0;
    if (pos.x == 770) {
        offset.x = 2000;
    } else {
        offset.x = -2000;
    }
    sfText_move(text[index], offset);
}

void gayardos_rider_movement(sfSprite **sprite, int index)
{
    sfVector2f pos = sfSprite_getPosition(sprite[index]);
    if (pos.x <= -200) {
        pos.x = 2900;
    } else {
        pos.x += -0.9;
    }
    sfSprite_setPosition(sprite[index], pos);
}

void ohoh_movement(sfSprite **sprite, int index)
{
    sfVector2f pos = sfSprite_getPosition(sprite[index]);
    if (pos.x >= 2500) {
        pos.x = -1500;
    } else {
        pos.x += 1.5;
    }
    sfSprite_setPosition(sprite[index], pos);
}

/*
** EPITECH PROJECT, 2022
** sprite_6.c
** File description:
** sprite 6
*/

#include "include/my.h"

void ohoh_credit(sprite *sprite, int index)
{
    create_sprite_texture("image/Ho-Oh-rev.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 65;
    rect.height = 60;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(4400, 957, 2, sprite->sprite[index]);
}

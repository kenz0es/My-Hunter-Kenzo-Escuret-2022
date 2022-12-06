/*
** EPITECH PROJECT, 2022
** sprite_1.c
** File description:
** sprite 1
*/

#include "include/my.h"

void backgrounf_normal(sprite *sprite, int index)
{
    create_sprite_texture("image/background.jpg", sprite, index);
}

void logo(sprite *sprite, int index)
{
    create_sprite_texture("image/logofix.png", sprite, index);
    scale_position_sprite(450, 0, 2, sprite->sprite[index]);
}

void sublogo(sprite *sprite, int index)
{
    create_sprite_texture("image/catch.png", sprite, index);
    scale_position_sprite(650, 350, 4, sprite->sprite[index]);
}

void gayardos_trainer(sprite *sprite, int index)
{
    create_sprite_texture("image/gayardo.png", sprite, index);
    sfIntRect rect;
    rect.top = 115;
    rect.left = 0;
    rect.width = 167;
    rect.height = 115;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(2400, 730, 1, sprite->sprite[index]);
}

void ohoh(sprite *sprite, int index)
{
    create_sprite_texture("image/Ho-Oh.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 61;
    rect.height = 61;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(-900, 200, 1.5, sprite->sprite[index]);
}

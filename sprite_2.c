/*
** EPITECH PROJECT, 2022
** sprite_2.c
** File description:
** sprite 2
*/

#include "include/my.h"

void trainer(sprite *sprite, int index)
{
    create_sprite_texture("image/trainer.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 180;
    rect.height = 153;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(-20, 623, 3, sprite->sprite[index]);
}

void backgrounf_dark(sprite *sprite, int index)
{
    create_sprite_texture("image/background-dark.jpg", sprite, index);
}

void mouse_cursor(sprite *sprite, int index)
{
    create_sprite_texture("image/cursor.png", sprite, index);
    scale_position_sprite(500, 500, 0.04, sprite->sprite[index]);
}

void pikachu_running(sprite *sprite, int index)
{
    create_sprite_texture("image/Pikachu.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 50;
    rect.height = 40;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(2000, 900, 2.3, sprite->sprite[index]);
}

void charizard(sprite *sprite, int index)
{
    create_sprite_texture("image/Charizard.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 2;
    rect.width = 64;
    rect.height = 50;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(2100, -2300, 2, sprite->sprite[index]);
}

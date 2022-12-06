/*
** EPITECH PROJECT, 2022
** sprite_5.c
** File description:
** sprite 5
*/

#include "include/my.h"

void tiplouf_credit(sprite *sprite, int index)
{
    create_sprite_texture("image/tiplouf.png", sprite, index);
    sfIntRect rect;
    rect.top = 4;
    rect.left = 0;
    rect.width = 19;
    rect.height = 22;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(2400, 980, 5, sprite->sprite[index]);
}

void escargot_credit(sprite *sprite, int index)
{
    create_sprite_texture("image/escargot_rev.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 60;
    rect.height = 62;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(2800, 968, 2, sprite->sprite[index]);
}

void snorlax_credit(sprite *sprite, int index)
{
    create_sprite_texture("image/snorlax_walk.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 100;
    rect.height = 77;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(3200, 970, 1.5, sprite->sprite[index]);
}

void gayardos_credit(sprite *sprite, int index)
{
    create_sprite_texture("image/gayardo.png", sprite, index);
    sfIntRect rect;
    rect.top = 115;
    rect.left = 0;
    rect.width = 167;
    rect.height = 115;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(3600, 970, 1, sprite->sprite[index]);
}

void charizard_credit(sprite *sprite, int index)
{
    create_sprite_texture("image/Charizard.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 2;
    rect.width = 64;
    rect.height = 50;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(4000, 970, 2, sprite->sprite[index]);
}

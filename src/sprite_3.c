/*
** EPITECH PROJECT, 2022
** sprite_3.c
** File description:
** sprite 3
*/

#include "../include/my.h"

void flash(sprite *sprite, int index)
{
    create_sprite_texture("image/flash.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 100;
    rect.height = 120;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(5000, 5000, 2, sprite->sprite[index]);
}

void pokeball(sprite *sprite, int index)
{
    create_sprite_texture("image/pokeball.png", sprite, index);
    scale_position_sprite(300, 850, 0.06, sprite->sprite[index]);
}

void background_hide(sprite *sprite, int index)
{
    create_sprite_texture("image/background.jpg", sprite, index);
    sfIntRect rect;
    rect.top = 850;
    rect.left = 300;
    rect.width = 40;
    rect.height = 35;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(300, 850, 1, sprite->sprite[index]);
}

void smoke(sprite *sprite, int index)
{
    create_sprite_texture("image/smoke.png", sprite, index);
    sfIntRect rect;
    rect.top = 30;
    rect.left = 30;
    rect.width = 130;
    rect.height = 140;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(500, 5000, 0.5, sprite->sprite[index]);
    for (int i = 0; i < 9; i++) {
        smoke_animation(sprite->sprite, index);
    }
}

void escargot(sprite *sprite, int index)
{
    create_sprite_texture("image/escargot.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 60;
    rect.height = 61;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(-200, -900, 1.5, sprite->sprite[index]);
}

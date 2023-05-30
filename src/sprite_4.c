/*
** EPITECH PROJECT, 2022
** sprite_4.c
** File description:
** sprite 4
*/

#include "../include/my.h"

void tiplouf(sprite *sprite, int index)
{
    create_sprite_texture("image/tiplouf.png", sprite, index);
    sfIntRect rect;
    rect.top = 4;
    rect.left = 0;
    rect.width = 19;
    rect.height = 22;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(500, -820, 1.5, sprite->sprite[index]);
}

void snorlax(sprite *sprite, int index)
{
    create_sprite_texture("image/snorlax.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 99;
    rect.height = 70;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(5000, 15000, 1.5, sprite->sprite[index]);
}

void background_hide_water(sprite *sprite, int index)
{
    create_sprite_texture("image/background.jpg", sprite, index);
    sfIntRect rect;
    rect.top = 830;
    rect.left = 0;
    rect.width = 1920;
    rect.height = 250;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(0, 830, 1, sprite->sprite[index]);
}

void water_splash(sprite *sprite, int index)
{
    create_sprite_texture("image/water-splash.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 199;
    rect.height = 70;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(-500, -500, 2.2, sprite->sprite[index]);
}

void pikachu_running_credit(sprite *sprite, int index)
{
    create_sprite_texture("image/Pikachu.png", sprite, index);
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 50;
    rect.height = 40;
    sfSprite_setTextureRect(sprite->sprite[index], rect);
    scale_position_sprite(2000, 970, 3, sprite->sprite[index]);
}

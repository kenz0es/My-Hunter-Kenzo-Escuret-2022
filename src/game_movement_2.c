/*
** EPITECH PROJECT, 2022
** game_movement_2.c
** File description:
** game movement 2
*/

#include "../include/my.h"

void tiplouf_movement(sfSprite **sprite, int index)
{
    sfVector2f pos = sfSprite_getPosition(sprite[index]);
    if (pos.x >= 2000) {
        pos.x = -100;
        pos.y = -100;
    } else {
        pos.x += 2.4;
    }
    sfSprite_setPosition(sprite[index], pos);
}

void snorlax_movement(sfSprite **sprite, int index, game *game)
{
    sfVector2f pos = sfSprite_getPosition(sprite[index]);
    sfVector2f splash;
    if (pos.y >= 800) {
        pos.y = 15000;
        pos.x = 5000;
    } else {
        pos.y += 8;
    }
    if (pos.y >= 735 && pos.y < 800) {
        splash.x = pos.x - 155, splash.y = 710;
        if (game->splash == 0) game->splash = 1;
        sfSprite_setPosition(sprite[14], splash);
    }
    sfSprite_setPosition(sprite[index], pos);
}

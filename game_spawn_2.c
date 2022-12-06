/*
** EPITECH PROJECT, 2022
** game_spawn_2.c
** File description:
** game spawn
*/

#include "include/my.h"

void spawn_tiplouf_left(sfSprite *sprite)
{
    int rando = rand() % 50;
    sfVector2f pos;
    pos.x = -50;
    pos.y = 750 + rando;
    sfSprite_setPosition(sprite, pos);
}

void spawn_snorlax_top(sfSprite *sprite)
{
    int rando = rand() % 1700;
    sfVector2f pos;
    pos.x = 30 + rando;
    pos.y = -150;
    sfSprite_setPosition(sprite, pos);
}

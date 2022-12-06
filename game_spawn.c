/*
** EPITECH PROJECT, 2022
** game_spawn.c
** File description:
** game spawn
*/

#include "include/my.h"

void spawn_pikachu_right(sfSprite *sprite)
{
    int rando = rand() % 100;
    sfVector2f pos;
    pos.x = 2000;
    pos.y = 900 + rando;
    sfSprite_setPosition(sprite, pos);
}

void spawn_ohoh_left(sfSprite *sprite)
{
    int rando = rand() % 700;
    sfVector2f pos;
    pos.x = -100;
    pos.y = 0 + rando;
    sfSprite_setPosition(sprite, pos);
}

void spawn_charizard_right(sfSprite *sprite)
{
    int rando = rand() % 700;
    sfVector2f pos;
    pos.x = 2000;
    pos.y = 0 + rando;
    sfSprite_setPosition(sprite, pos);
}

void spawn_escargot_left(sfSprite *sprite)
{
    int rando = rand() % 100;
    sfVector2f pos;
    pos.x = -100;
    pos.y = 800 + rando;
    sfSprite_setPosition(sprite, pos);
}

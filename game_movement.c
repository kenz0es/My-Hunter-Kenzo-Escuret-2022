/*
** EPITECH PROJECT, 2022
** game_movement.c
** File description:
** game_movement.c
*/

#include "include/my.h"

void pikachu_movement(sfSprite **sprite, int index)
{
    sfVector2f pos = sfSprite_getPosition(sprite[index]);
    if (pos.x <= -500) {
        pos.x = 2500;
        pos.y = -100;
    } else {
        pos.x += -5;
    }
    sfSprite_setPosition(sprite[index], pos);
}

void ohoh_movement_game(sfSprite **sprite, int index)
{
    sfVector2f pos = sfSprite_getPosition(sprite[index]);
    if (pos.x >= 2000) {
        pos.x = -500;
        pos.y = -100;
    } else {
        pos.x += 20;
    }
    sfSprite_setPosition(sprite[index], pos);
}

void charizard_movement_game(sfSprite **sprite, int index)
{
    sfVector2f pos = sfSprite_getPosition(sprite[index]);
    if (pos.x <= -200) {
        pos.x = 2000;
        pos.y = -3000;
    } else {
        pos.x += -6;
    }
    if (pos.x >= 1500) {
        pos.y += -2;
    } if (pos.x < 1500 && pos.x >= 1000) {
        pos.y += 2;
    } if (pos.x < 1000 && pos.x >= 500) {
        pos.y += -2;
    } if (pos.x < 500) {
        pos.y += 2;
    }
    sfSprite_setPosition(sprite[index], pos);
}

void pokeball_movement_game(sfSprite **sprite, int index, sfVector2i target)
{
    sfVector2f pos = sfSprite_getPosition(sprite[index]);
    sfVector2f offset, space = {1000000, 1000000};
    target.x += -19;
    target.y += -19;
    offset.x = target.x - pos.x;
    offset.y = target.y - pos.y;
    if (offset.x < 0) {
        if (offset.x >= -15) sfSprite_setPosition(sprite[index], space);
    } else {
        if (offset.x <= 15) sfSprite_setPosition(sprite[index], space);
    }
    offset.x = offset.x / 4.5;
    offset.y = offset.y / 4.5;
    sfSprite_move(sprite[index], offset);
}

void escargot_movement(sfSprite **sprite, int index)
{
    sfVector2f pos = sfSprite_getPosition(sprite[index]);
    if (pos.x >= 2000) {
        pos.x = -300;
        pos.y = -100;
    } else {
        pos.x += 1.5;
    }
    sfSprite_setPosition(sprite[index], pos);
}

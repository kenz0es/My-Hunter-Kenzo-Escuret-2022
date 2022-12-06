/*
** EPITECH PROJECT, 2022
** credit_movement.c
** File description:
** credit movement
*/

#include "include/my.h"

void movement_credit(sfSprite **sprite, int index)
{
    sfVector2f pos = sfSprite_getPosition(sprite[index]);
    if (pos.x <= -300) {
        pos.x = 2500;
    } else {
        pos.x += -3;
    }
    sfSprite_setPosition(sprite[index], pos);
}

/*
** EPITECH PROJECT, 2022
** time.c
** File description:
** time
*/

#include "../include/my.h"

time create_time(int size)
{
    time time;
    time.size = size;
    time.timer = 30;
    time.clock = malloc(sizeof(sfClock *) * time.size);
    for (int i = 0; i < time.size; i++) time.clock[i] = sfClock_create();
    time.time = malloc(sizeof(sfTime) * time.size);
    time.seconds = malloc(sizeof(float) * time.size);
    return time;
}

void initialize_time(time *time)
{
    for (int i = 0; i < time->size; i++) {
        time->time[i] = sfClock_getElapsedTime(time->clock[i]);
        time->seconds[i] = sfTime_asSeconds(time->time[i]);
    }
}

/*
** EPITECH PROJECT, 2022
** destroy.c
** File description:
** destroy
*/

#include "../include/my.h"

void destroy_screen(sprite *sprite, text *text, sound *sound, time *time)
{
    destroy_clock(time);
    destroy_sprite(sprite);
    destroy_sound(sound);
    destroy_text(text);
}

void destroy_clock(time *time)
{
    for (int i = 0; i < time->size; i++) {
        sfClock_destroy(time->clock[i]);
    }
    free(time->clock);
    free(time->time);
    free(time->seconds);
}

void destroy_sprite(sprite *sprite)
{
    for (int i = 0; i < sprite->size; i++) {
        sfSprite_destroy(sprite->sprite[i]);
        sfTexture_destroy(sprite->texture[i]);
    }
    free(sprite->sprite);
    free(sprite->texture);
}

void destroy_sound(sound *sound)
{
    for (int i = 0; i < sound->size; i++) {
        sfSound_destroy(sound->sound[i]);
        sfSoundBuffer_destroy(sound->soundbuffer[i]);
    }
    free(sound->sound);
    free(sound->soundbuffer);
}

void destroy_text(text *text)
{
    for (int i = 0; i < text->size; i++) {
        sfText_destroy(text->text[i]);
        sfFont_destroy(text->font[i]);
    }
    free(text->text);
    free(text->font);
}

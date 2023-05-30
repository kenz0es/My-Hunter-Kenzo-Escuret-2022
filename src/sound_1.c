/*
** EPITECH PROJECT, 2022
** sound_1.c
** File description:
** sound 1
*/

#include "../include/my.h"

void create_music(char *song, sound *sound_st, int index)
{
    sfSound *sound = sfSound_create();
    sfSoundBuffer *buffer = sfSoundBuffer_createFromFile(song);
    sfSound_setBuffer(sound, buffer);
    sfSound_setLoop(sound, sfTrue);
    sfSound_setVolume(sound, 90);
    sfSound_play(sound);
    sound_st->soundbuffer[index] = buffer;
    sound_st->sound[index] = sound;
}

void create_sound(char *song, sound *sound_st, int index)
{
    sfSound *sound = sfSound_create();
    sfSoundBuffer *buffer = sfSoundBuffer_createFromFile(song);
    sfSound_setBuffer(sound, buffer);
    sfSound_setVolume(sound, 90);
    sound_st->soundbuffer[index] = buffer;
    sound_st->sound[index] = sound;
}

/*
** EPITECH PROJECT, 2022
** starting_screen_element.c
** File description:
** starting screen element
*/

#include "../include/my.h"

sprite sprite_starting_screen(void)
{
    sprite spr_st;
    spr_st.size = 5;
    sfSprite **sprite = malloc(sizeof(sfSprite *) * spr_st.size);
    spr_st.texture = malloc(sizeof(sfTexture *) * spr_st.size);
    for (int i = 0; i < spr_st.size; i++) spr_st.texture[i] = NULL;
    spr_st.sprite = sprite;
    backgrounf_normal(&spr_st, 0);
    logo(&spr_st, 1);
    sublogo(&spr_st, 2);
    gayardos_trainer(&spr_st, 3);
    ohoh(&spr_st, 4);
    return spr_st;
}

sound sound_starting_screen(void)
{
    sound str_sound;
    str_sound.size = 3;
    str_sound.sound = malloc(sizeof(sfSound *) * str_sound.size);
    str_sound.soundbuffer = malloc(sizeof(sfTexture *) * str_sound.size);
    for (int i = 0; i < str_sound.size; i++) str_sound.soundbuffer[i] = NULL;
    create_music("sound/National-Park.ogg", &str_sound, 0);
    create_music("sound/Wave.ogg", &str_sound, 1);
    create_music("sound/Seagull.ogg", &str_sound, 2);
    sfSound_setVolume(str_sound.sound[1], 55);
    sfSound_setVolume(str_sound.sound[2], 65);
    return str_sound;
}

text text_starting_screen(void)
{
    text text;
    text.size = 1;
    text.text = malloc(sizeof(sfText *) * text.size);
    text.font = malloc(sizeof(sfFont *) * text.size);
    create_text("Press Space", "font/pokemon_pixel_font.ttf", &text, 0);
    size_position_text(770, 610, 100, text.text[0]);
    return text;
}

void render_sprite_starting_screen(sfRenderWindow *window, sfSprite **sprite)
{
    sfRenderWindow_drawSprite(window, sprite[0], NULL);
    sfRenderWindow_drawSprite(window, sprite[4], NULL);
    sfRenderWindow_drawSprite(window, sprite[1], NULL);
    sfRenderWindow_drawSprite(window, sprite[2], NULL);
    sfRenderWindow_drawSprite(window, sprite[3], NULL);
}

/*
** EPITECH PROJECT, 2022
** credit_element.c
** File description:
** credit element
*/

#include "include/my.h"

sprite sprite_credit_screen(void)
{
    sprite spr_st;
    spr_st.size = 8;
    sfSprite **sprite = malloc(sizeof(sfSprite *) * spr_st.size);
    spr_st.texture = malloc(sizeof(sfTexture *) * spr_st.size);
    for (int i = 0; i < spr_st.size; i++) spr_st.texture[i] = NULL;
    spr_st.sprite = sprite;
    backgrounf_dark(&spr_st, 0);
    pikachu_running_credit(&spr_st, 1);
    tiplouf_credit(&spr_st, 2);
    escargot_credit(&spr_st, 3);
    snorlax_credit(&spr_st, 4);
    gayardos_credit(&spr_st, 5);
    charizard_credit(&spr_st, 6);
    ohoh_credit(&spr_st, 7);
    return spr_st;
}

sound sound_credit_screen(game *game)
{
    sound str_sound;
    str_sound.size = 1;
    str_sound.sound = malloc(sizeof(sfSound *) * str_sound.size);
    str_sound.soundbuffer = malloc(sizeof(sfTexture *) * str_sound.size);
    for (int i = 0; i < str_sound.size; i++) str_sound.soundbuffer[i] = NULL;
    if (game->score < 2000) create_music("sound/end.ogg", &str_sound, 0);
    else {
        create_music("sound/pokemon-drill.ogg", &str_sound, 0);
    }
    return str_sound;
}

text text_credit_screen(game game)
{
    text text;
    int score = game.score;
    text.size = 4;
    text.text = malloc(sizeof(sfText *) * text.size);
    text.font = malloc(sizeof(sfFont *) * text.size);
    if (score <= 200) { create_text("You're okay?"
        , "font/pokemon_pixel_font.ttf", &text, 0);
    } if (score <= 1000 && score > 750 || score <= 749 && score > 200) {
        create_text("Not bad but could be better"
            , "font/pokemon_pixel_font.ttf", &text, 0);
    } if (score == 750) { create_text("Too much water"
            , "font/pokemon_pixel_font.ttf", &text, 0);
    } if (score < 2000 && score > 1000) {
        create_text("What a great member\nof Team Rocket you are!"
            , "font/pokemon_pixel_font.ttf", &text, 0);
    } if (score > 2000) {
        create_text("WHAT A FUCKING LEGEND!!!!!!!"
            , "font/pokemon_pixel_font.ttf", &text, 0);
    } text_credit_screen_2(game, &text, score);
    return text;
}

void text_credit_screen_2(game game, text *text, int score)
{
    create_text("Score : ", "font/pokemon_pixel_font.ttf", text, 1);
    create_text("Press Space to main menu"
        , "font/pokemon_pixel_font.ttf", text, 2);
    create_text("Press Esc to exit"
        , "font/pokemon_pixel_font.ttf", text, 3);
    change_score(game.score, text->text[1]);
    if (score < 2000 && score > 1000) {
        size_position_text(400, 0, 150, text->text[0]);
    } else {
        size_position_text(400, 100, 150, text->text[0]);
    } size_position_text(400, 300, 150, text->text[1]);
    size_position_text(400, 500, 150, text->text[2]);
    size_position_text(400, 700, 150, text->text[3]);
}

void render_sprite_credit_screen(sfRenderWindow *window, sfSprite **sprite)
{
    sfRenderWindow_drawSprite(window, sprite[0], NULL);
    sfRenderWindow_drawSprite(window, sprite[1], NULL);
    sfRenderWindow_drawSprite(window, sprite[2], NULL);
    sfRenderWindow_drawSprite(window, sprite[3], NULL);
    sfRenderWindow_drawSprite(window, sprite[4], NULL);
    sfRenderWindow_drawSprite(window, sprite[5], NULL);
    sfRenderWindow_drawSprite(window, sprite[6], NULL);
    sfRenderWindow_drawSprite(window, sprite[7], NULL);
}

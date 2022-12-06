/*
** EPITECH PROJECT, 2022
** game_element.c
** File description:
** game element
*/

#include "include/my.h"

sprite sprite_game_screen(void)
{
    sprite spr_st;
    spr_st.size = 15;
    sfSprite **sprite = malloc(sizeof(sfSprite *) * spr_st.size);
    spr_st.texture = malloc(sizeof(sfTexture *) * spr_st.size);
    for (int i = 0; i < spr_st.size; i++) spr_st.texture[i] = NULL;
    spr_st.sprite = sprite;
    backgrounf_normal(&spr_st, 0);
    trainer(&spr_st, 1);
    mouse_cursor(&spr_st, 2);
    pikachu_running(&spr_st, 3);
    ohoh(&spr_st, 4);
    scale_position_sprite(-110, -100, 1.5, spr_st.sprite[4]);
    charizard(&spr_st, 5);
    flash(&spr_st, 6);
    pokeball(&spr_st, 7);
    background_hide(&spr_st, 8);
    smoke(&spr_st, 9);
    sprite_game_screen_2(&spr_st);
    return spr_st;
}

sound sound_game_screen(void)
{
    sound str_sound;
    str_sound.size = 10;
    str_sound.sound = malloc(sizeof(sfSound *) * str_sound.size);
    str_sound.soundbuffer = malloc(sizeof(sfTexture *) * str_sound.size);
    for (int i = 0; i < str_sound.size; i++) str_sound.soundbuffer[i] = NULL;
    create_music("sound/Game-Corner.ogg", &str_sound, 0);
    create_sound("sound/throw.ogg", &str_sound, 1);
    create_sound("sound/pikachu-sound.ogg", &str_sound, 2);
    create_sound("sound/ho-oh-sound.ogg", &str_sound, 3);
    create_sound("sound/charizard-sound.ogg", &str_sound, 4);
    create_sound("sound/poof.ogg", &str_sound, 5);
    create_sound("sound/magcargo-cry.ogg", &str_sound, 6);
    create_sound("sound/tiplouf-cri.ogg", &str_sound, 7);
    create_sound("sound/snorlax-cry.ogg", &str_sound, 8);
    create_sound("sound/burst.ogg", &str_sound, 9);
    sound_game_screen_2(&str_sound);
    return str_sound;
}

text text_game_screen(void)
{
    text text;
    text.size = 2;
    text.text = malloc(sizeof(sfText *) * text.size);
    text.font = malloc(sizeof(sfFont *) * text.size);
    create_text("Timer : 30", "font/pokemon_pixel_font.ttf", &text, 0);
    create_text("Score : 0", "font/pokemon_pixel_font.ttf", &text, 1);
    size_position_text(1650, 0, 80, text.text[0]);
    size_position_text(50, 0, 80, text.text[1]);
    return text;
}

void render_sprite_game_screen(sfRenderWindow *window, sfSprite **sprite)
{
    sfRenderWindow_drawSprite(window, sprite[0], NULL);
    sfRenderWindow_drawSprite(window, sprite[12], NULL);
    sfRenderWindow_drawSprite(window, sprite[13], NULL);
    sfRenderWindow_drawSprite(window, sprite[14], NULL);
    sfRenderWindow_drawSprite(window, sprite[10], NULL);
    sfRenderWindow_drawSprite(window, sprite[3], NULL);
    sfRenderWindow_drawSprite(window, sprite[11], NULL);
    sfRenderWindow_drawSprite(window, sprite[4], NULL);
    sfRenderWindow_drawSprite(window, sprite[5], NULL);
    sfRenderWindow_drawSprite(window, sprite[7], NULL);
    sfRenderWindow_drawSprite(window, sprite[8], NULL);
    sfRenderWindow_drawSprite(window, sprite[6], NULL);
    sfRenderWindow_drawSprite(window, sprite[9], NULL);
    sfRenderWindow_drawSprite(window, sprite[1], NULL);
    sfRenderWindow_drawSprite(window, sprite[2], NULL);
}

void click_management_game_screen(time *time, sprite *sprite
    , game *game, sound sound)
{
    if (game->click > 4 && time->seconds[2] > 0.15) {
        catch_pokemon(game, sprite, sound);
        game->click = 0;
    } if (time->seconds[2] > 0.15 && game->click > 0 && game->click < 5) {
        activate_dresseur(sprite, game);
        sfClock_restart(time->clock[2]);
    } if (time->seconds[6] > 0.05 && game->catch > 0) {
        activate_flash(sprite, game);
        sfClock_restart(time->clock[6]);
    } if (time->seconds[7] > 0.01 && game->click > 4) {
        pokeball_movement_game(sprite->sprite, 7, game->mousse);
        sfClock_restart(time->clock[7]);
    } if (time->seconds[8] > 0.04 && game->miss > 0) {
        if (game->miss == 1) { sfSound_play(sound.sound[5]);
        } activate_smoke(sprite, game);
        sfClock_restart(time->clock[8]);
    } click_management_game_screen_2(time, sprite, game, sound);
}

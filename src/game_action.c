/*
** EPITECH PROJECT, 2022
** game_action.c
** File description:
** game action
*/

#include "../include/my.h"

void cursor_position(game *game, sprite *sprite, int index)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    float x = mouse_pos.x - 20, y = mouse_pos.y - 20;
    sfVector2f pos_float = {x, y};
    sfSprite_setPosition(sprite->sprite[index], pos_float);
}

void catch_pokemon(game *game, sprite *sprite, sound sound)
{
    int *score = malloc(sizeof(int) * 2), catch = 0;
    game->miss = 1;
    sfVector2f ball = {310, 850}, mousse;
    mousse.x = game->mousse.x - 32, mousse.y = game->mousse.y - 34;
    sfSprite_setPosition(sprite->sprite[9], mousse);
    score[0] = 130, score[1] = 100;
    if (pokemon_hit_score(game, sprite->sprite[3], score, sprite) == 1) {
        sfSound_play(sound.sound[2]);
    } score[0] = 160, score[1] = 1000;
    if (pokemon_hit_score(game, sprite->sprite[4], score, sprite) == 1) {
        sfSound_play(sound.sound[3]);
    } score[1] = 200, score[0] = 180;
    if (pokemon_hit_score(game, sprite->sprite[5], score, sprite) == 1) {
        sfSound_play(sound.sound[4]);
    }
    sfSprite_setPosition(sprite->sprite[7], ball);
    catch_pokemon_2(game, sprite, sound, score);
}

void catch_pokemon_2(game *game, sprite *sprite, sound sound, int *score)
{
    score[0] = 140, score[1] = 50;
    if (pokemon_hit_score(game, sprite->sprite[10], score, sprite) == 1) {
        sfSound_play(sound.sound[6]);
    } score[0] = 90, score[1] = 150;
    if (pokemon_hit_score(game, sprite->sprite[11], score, sprite) == 1) {
        sfSound_play(sound.sound[7]);
    } score[0] = 180, score[1] = 250;
    if (pokemon_hit_score(game, sprite->sprite[12], score, sprite) == 1) {
        sfSound_play(sound.sound[8]);
    }
}

int pokemon_hit_score(game *game, sfSprite *sprite_po, int *score_hit
    , sprite *flash_smoke)
{
    sfVector2f move = {6000, 6000};
    sfVector2f pokemon = sfSprite_getPosition(sprite_po);
    if (game->mousse.x >= pokemon.x &&
        game->mousse.x <= pokemon.x + score_hit[0]) {
        if (game->mousse.y >= pokemon.y &&
            game->mousse.y <= pokemon.y + score_hit[0] - 20) {
            game->score += score_hit[1];
            game->catch = 1;
            game->miss = 0;
            pokemon.x += -50;
            pokemon.y += -50;
            sfSprite_setPosition(flash_smoke->sprite[6], pokemon);
            sfSprite_move(sprite_po, move);
            return 1;
        }
    }
    return 0;
}

void timer_spawn(game *game, sprite *sprite, sound *sound, time *time)
{
    if (time->seconds[4] > 1) {
        if (time->timer == 29) spawn_tiplouf_left(sprite->sprite[11]);
        if (time->timer == 29) spawn_escargot_left(sprite->sprite[10]);
        if (time->timer == 25) spawn_charizard_right(sprite->sprite[5]);
        if (time->timer == 23) spawn_snorlax_top(sprite->sprite[12]);
        if (time->timer == 20) spawn_pikachu_right(sprite->sprite[3]);
        if (time->timer == 10) spawn_ohoh_left(sprite->sprite[4]);
        if (time->timer == 17) spawn_snorlax_top(sprite->sprite[12]);
        if (time->timer == 15) spawn_tiplouf_left(sprite->sprite[11]);
        if (time->timer == 12) spawn_pikachu_right(sprite->sprite[3]);
        if (time->timer == 8) spawn_charizard_right(sprite->sprite[5]);
        if (time->timer == 7) spawn_snorlax_top(sprite->sprite[12]);
        if (time->timer == 6) spawn_escargot_left(sprite->sprite[10]);
        if (time->timer == 2) spawn_ohoh_left(sprite->sprite[4]);
        if (time->timer == 3) spawn_pikachu_right(sprite->sprite[3]);
        sfClock_restart(time->clock[4]);
    }
}

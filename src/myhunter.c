/*
** EPITECH PROJECT, 2022
** myhunter.c
** File description:
** myhunter
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    if (ac > 2) return my_putstr_error("help: '-h'\n");
    if (ac == 2) return help(av[1]);
    game game = create_game("game");
    if (ac == 1) starting_screen(&game);
    return 0;
}

void scale_position_sprite(float xpos, float ypos, float scale
    , sfSprite *sprite)
{
    sfVector2f pos = {xpos, ypos};
    sfVector2f scale_vec = {scale, scale};
    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale_vec);
}

void size_position_text(float xpos, float ypos, float scale, sfText *text)
{
    sfVector2f pos = {xpos, ypos};
    sfText_setPosition(text, pos);
    sfText_setCharacterSize(text, scale);
    sfText_setOutlineThickness(text, 2);
}

void create_sprite_texture(char *image, sprite *sprite_struct, int index)
{
    sfTexture *texture = sfTexture_createFromFile(image, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfFalse);
    sprite_struct->texture[index] = texture;
    sprite_struct->sprite[index] = sprite;
}

game create_game(char *name)
{
    game game;
    sfVideoMode video_mode = {1920, 1080, 32};
    sfRenderWindow *window;
    window = sfRenderWindow_create(video_mode, name, sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    game.window = window;
    game.score = 0;
    game.space = 0;
    game.esc = 0;
    game.splash = 0;
    game.click = 0;
    game.catch = 0;
    game.miss = 0;
    game.mousse.x = 0;
    game.mousse.y = 0;
    return game;
}

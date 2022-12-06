/*
** EPITECH PROJECT, 2022
** text.c
** File description:
** text
*/

#include "include/my.h"

void create_text(char *content, char *path_font, text *text, int index)
{
    text->font[index] = sfFont_createFromFile(path_font);
    text->text[index] = sfText_create();
    sfText_setFont(text->text[index], text->font[index]);
    sfText_setString(text->text[index], content);
}

void change_score(int score, sfText *text)
{
    char *number = int_to_str(score), *full_timer;
    full_timer = combine_str("Score : ", number);
    sfText_setString(text, full_timer);
}

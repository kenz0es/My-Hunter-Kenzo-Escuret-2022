/*
** EPITECH PROJECT, 2022
** print_error.c
** File description:
** print error
*/

#include "../include/my.h"

int my_putstr_error(char const *str)
{
    write(2, str, my_strlen(str));
    return 84;
}

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}

int my_strlen(const char *str)
{
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

int help(char *str)
{
    if (str[0] != '-') return my_putstr_error("help: '-h'\n");
    if (str[1] != 'h') return my_putstr_error("help: '-h'\n");
    if (str[2] != '\0') return my_putstr_error("help: '-h'\n");
    my_putstr("RULES:\n    Catch as many pokemons, the more you catch");
    my_putstr(", the higher your score.\n\nCONTROLS:\n    Aim with the");
    my_putstr(" mousse.\n    Left click to catch.\n    Esc to quit game.\n");
    return 0;
}

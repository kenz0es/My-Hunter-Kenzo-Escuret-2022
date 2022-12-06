/*
** EPITECH PROJECT, 2022
** timer.c
** File description:
** timer
*/

#include "include/my.h"

char *int_to_str(long long nbr)
{
    int i = 0;
    long long origin = nbr, copy = nbr;
    while (nbr / 10 != 0) { i++;
        nbr = nbr / 10;
    } char *number = malloc(sizeof(char) * (i + 2));
    nbr = origin;
    for (int x = 0; x <= i; x++) {
        nbr = copy / power_ten(i - x + 1);
        nbr = nbr * 10;
        copy = copy / power_ten(i - x);
        nbr = copy - nbr;
        copy = origin;
        number[x] = (nbr + 48);
        nbr = origin;
    } number[i + 1] = '\0';
    return number;
}

int power_ten(int nbr)
{
    int res = 1;
    for (int i = 0; i < nbr; i++) {
        res = res * 10;
    } return res;
}

char *combine_str(char *str1, char *str2)
{
    int len = my_strlen(str1), x = 0;
    len += my_strlen(str2);
    char *full = malloc(sizeof(char) * (len + 1));
    for (int i = 0; str1[i] != '\0'; i++) {
        full[x] = str1[i];
        x++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        full[x] = str2[i];
        x++;
    } full[x] = '\0';
    return full;
}

void change_timer(int *timer, sfText *text)
{
    (*timer)--;
    char *number = int_to_str(*timer), *full_timer;
    if (*timer < 10) {
        full_timer = combine_str("Timer : 0", number);
    } else {
        full_timer = combine_str("Timer : ", number);
    }
    sfText_setString(text, full_timer);
}

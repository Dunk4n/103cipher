/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** reverses stuff
*/

#include "my.h"

static int my_strlen2(char const *str2)
{
    int ret2 = 0;

    for (int i = 0; str2[i] != '\0'; i++) {
        ret2++;
    }
    return (ret2);
}

char *my_revstr(char *str)
{
    int j = my_strlen2(str);
    char rts[j];

    for (int i = 0; str[i] != '\0'; i++) {
        rts[j-1] = str[i];
        j--;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = rts[i];
    }
    return (str);
}

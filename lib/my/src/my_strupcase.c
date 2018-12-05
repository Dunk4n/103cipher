/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** up case all low cases characters
*/

#include "my.h"

char *my_strupcase(char *str)
{
    int offset = 'A' - 'a';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] += offset;
        i += 1;
    }
    return (str);
}

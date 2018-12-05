/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** low case the string
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    int offset = 'a' - 'A';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += offset;
    }
    return (str);
}

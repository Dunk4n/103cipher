/*
** EPITECH PROJECT, 2018
** my_str_isnum
** File description:
** checks if str is only numbers
*/

#include "my.h"

static int is_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_num(str[i]) == 0)
            return (0);
    }
    return (1);
}

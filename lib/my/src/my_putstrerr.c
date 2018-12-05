/*
** EPITECH PROJECT, 2018
** my_putstrerr
** File description:
** print a char * in the 2 way
*/

#include "my.h"

void my_putstrerr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_puterr(str[i]);
    }
    my_puterr('\n');
}

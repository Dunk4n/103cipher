/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** display a string given as a parameter.
*/

#include "my.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    my_putchar('\n');
}

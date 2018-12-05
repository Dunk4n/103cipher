/*
** EPITECH PROJECT, 2018
** my_puterr_str
** File description:
** prints a string into stderr
*/

#include "my.h"

void my_puterr_str(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_puterr(str[i]);
    }
}

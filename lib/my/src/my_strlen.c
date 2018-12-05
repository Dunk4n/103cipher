/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** counts number of character in a string given as a parameter
*/

#include "my.h"

int my_strlen(char const *str)
{
    int ret = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        ret++;
    }
    return (ret);
}

/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** does stuff
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int length = my_strlen(dest);
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[i + length] = src[i];
    }
    dest[i + length] = '\0';
    return (dest);
}

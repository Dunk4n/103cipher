/*
** EPITECH PROJECT, 2018
** my_strcpy
** File description:
** copy a string into another
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}

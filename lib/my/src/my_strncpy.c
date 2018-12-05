/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** copies stuff into stuff
*/

#include "my.h"

static int my_strlen7(char const *src)
{
    int count = 0;

    for (int i = 0; src[i] != '\0'; i++) {
        count++;
    }
    return (count);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    if (n <= 0)
        return (dest);
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    if (n > my_strlen7(src) && i < n)
        dest[i] = '\0';
    return (dest);
}

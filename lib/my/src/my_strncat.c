/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** does stuff sometimes
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    char *ptr = dest + my_strlen(dest);
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        ptr[i] = src[i];
    }
    ptr[i] = '\0';
    return (dest);
}

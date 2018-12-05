/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** find a string in a string
*/

#include "my.h"

static int my_strlen_strstr(char const *to_find)
{
    int count = 0;

    while (to_find[count] != '\0')
        count += 1;
    return (count);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int tf_length = my_strlen_strstr(to_find);

    if (*str == '\0')
        return (0);
    while (str[i] != to_find[i] && str[i] != '\0')
        str += 1;
    if (str[i] != '\0') {
        while (str[i] == to_find[i] && str[i] != '\0' && to_find[i] != '\0') {
            i += 1;
        }
        if (i == tf_length)
            return (str);
        else if (str[i] != '\0')
            return (my_strstr(str + 1, to_find));
        else
            return (0);
    } else
        return (0);
}

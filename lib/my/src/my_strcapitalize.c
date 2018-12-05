/*
** EPITECH PROJECT, 2018
** my strcapitalize
** File description:
** capitalize all first letters of each words
*/

#include "my.h"

static int my_is_alphabet(char c)
{
    if (c >= 'a' && c <= 'z'|| c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}

static char check_lowcase(char *str, int i)
{
    int lowcase = 'a' - 'A';

    if (i != 0) {
        if (my_is_alphabet(str[i - 1]) == 1)
            return (str[i] += lowcase);
        else
            return (str[i]);
    } else
        return (str[i]);
}

static char check_upcase(char *str, int i)
{
    int upcase = 'A' - 'a';

    if (i != 0) {
        if (my_is_alphabet(str[i - 1]) == 0)
            return (str[i] += upcase);
        else
            return (str[i]);
    } else
        return (str[i] += upcase);
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = check_upcase(str, i);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = check_lowcase(str, i);
    }
    return (str);
}

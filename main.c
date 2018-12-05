/*
** EPITECH PROJECT, 2018
** main
** File description:
** main of 103cipher
*/

#include "lucifer.h"

int main (int ac, char *av)
{
    if (ac == 4)
        103cipher(av);
    else
        return (84);
    return (0);
}

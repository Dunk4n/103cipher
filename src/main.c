/*
** EPITECH PROJECT, 2018
** main
** File description:
** main of 103cipher
*/

#include "my.h"
#include "lucifer.h"

int main(int ac, char **av)
{
    if (ac != 4)
        return (84);
    return (cipher(av, my_getnbr(av[3])));
}

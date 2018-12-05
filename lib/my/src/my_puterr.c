/*
** EPITECH PROJECT, 2018
** putError
** File description:
** Prints a character in stderr
*/

#include "my.h"

void my_puterr(char c)
{
    write(2, &c, 1);
}

/*
** EPITECH PROJECT, 2018
** mylib
** File description:
** prints a character to the console
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

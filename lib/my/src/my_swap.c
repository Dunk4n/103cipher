/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Swaps two ints given as parameters
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int swap = *b;

    *b = *a;
    *a = swap;
}
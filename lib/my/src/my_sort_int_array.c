/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** sort an integrer array in ascending order
*/

#include "my.h"

static void change(int *table, int size, int position)
{
    for (int i = position; i > 0; i--) {
        if (table[position] < table[position -1]) {
            my_swap(&table[position], &table[position - 1]);
            position--;
        }
        else
            return;
    }
}

void my_sort_int_array(int *tab, int size)
{
    for (int i = 0; i < size; i++) {
        change(tab, size, i);
    }
}

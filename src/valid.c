/*
** EPITECH PROJECT, 2018
** valid
** File description:
** try not to segfault, good luck :)
*/

#include <stdlib.h>
#include <stdio.h>
#include "lucifer.h"

int     is_revers(double **key, int nbcol)
{
    int i = 0;
    int j = 0;
    int bol = 0;

    while (i < nbcol) {
        j = 0;
        bol = 0;
        while (j < nbcol) {
            bol += (key[i][j] != 0) ? 1 : 0;
            j++;
        }
        if (bol == 0)
            return (84);
        i++;
    }
    return (0);
}

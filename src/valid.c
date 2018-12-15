/*
** EPITECH PROJECT, 2018
** valid
** File description:
** try not to segfault, good luck :)
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
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

void    print_round(double nb)
{
    int tmp = ((nb < 0) ? nb - 0.0005 : nb + 0.0005) * 1000;

    nb = (double)tmp / 1000;
    if ((int)round((nb * 100 - (int)(nb * 100)) * 10) != 0)
        printf("%.3f", nb);
    else if ((int)round((nb * 10 - (int)(nb * 10)) * 10) != 0)
        printf("%.2f", nb);
    else
        printf("%.1f", nb);
}

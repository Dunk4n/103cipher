/*
** EPITECH PROJECT, 2018
** parsing
** File description:
** try not to segfault, good luck :)
*/

#include <stdlib.h>
#include "lucifer.h"
#include "my.h"

int     find_max(double **key, int j, int r, int nbcol)
{
    double  res = 0;
    int i = r;
    int tmp = i;

    while (i < nbcol) {
        if (res < ABS(key[i][j])) {
            res = ABS(key[i][j]);
            tmp = i;
        }
        i++;
    }
    return (tmp);
}

void    div_lig(double *key, double x, int nbcol)
{
    int i = 0;

    while (i < nbcol) {
        key[i] /= x;
        i++;
    }
}

void    exchange(double *lig1, double *lig2, int nbcol)
{
    double *tmp = malloc(sizeof(double) * nbcol);
    int i = -1;

    if (tmp == NULL)
        return ;
    while (++i < nbcol)
        tmp[i] = lig1[i];
    i = 0;
    while (i < nbcol) {
        lig1[i] = lig2[i];
        lig2[i] = tmp[i];
        i++;
    }
    free(tmp);
}

void    sub_lig(double *li, double *lr, double x, int nbcol)
{
    int i = 0;

    while (i < nbcol) {
        li[i] -= lr[i] * x;
        i++;
    }
}

int     invert_matrix(double **key, double **id, int nbcol)
{
    int k = 0;
    int r = 0;
    int j = -1;
    int i = -1;

    while (++j < nbcol && is_revers(key, nbcol) != 84) {
        k = find_max(key, j, r, nbcol);
        if (key[k][j] != 0) {
            div_lig(id[k], key[k][j], nbcol);
            div_lig(key[k], key[k][j], nbcol);
            exchange(key[k], key[r], nbcol);
            exchange(id[k], id[r], nbcol);
            i = -1;
            while (++i < nbcol) {
                (i != r) ? sub_lig(id[i], id[r], key[i][j], nbcol) : 0;
                (i != r) ? sub_lig(key[i], key[r], key[i][j], nbcol) : 0;
            }
            r++;
        }
    }
    return ((is_revers(key, nbcol) != 84) ? 0 : 84);
}

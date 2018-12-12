/*
** EPITECH PROJECT, 2018
** inverted
** File description:
** try not to segfault, good luck :)
*/

#include <stdlib.h>
#include <stdio.h>
#include "lucifer.h"

int     deter(int **key, int col)
{
    int i;
    int j = 0;
    int pool = 1;
    int pool2 = 1;
    int res = 0;

    while (j < col) {
        i = -1;
        pool = 1;
        while (++i < col) {
            pool *= key[i][(j + i < col) ? (j + i) : (j + i - col)];
            pool2 *= key[col - i - 1][(j + i < col) ? (j + i) : (j + i - col)];
        }
        res += pool - pool2;
        j++;
    }
    return (ABS(res));
}

double  **matrix(int **key, int nbcol, int type)
{
    double **trix = malloc(sizeof(double*) * nbcol);
    int i = 0;
    int j = 0;

    while (i < nbcol) {
        trix[i] = malloc(sizeof(double) * nbcol);
        j = -1;
        while (++j < nbcol)
            trix[i][j] = (type == 1) ? 0 : (double)(key[i][j]);
        j = -1;
        while (type == 1 && ++j < nbcol)
            trix[i][j] = (type == 1 && i == j) ? 1 : 0;
        i++;
    }
    return (trix);
}

void    display_reverse_matrix(double **key, int nbcol)
{
    int i = 0;
    int j = 0;

    while (i < nbcol ) {
        j = 0;
        while (j < nbcol) {
            (key[i][j] == 0) ? printf("%.1f", key[i][j]) : 0;
            (key[i][j] != 0) ? printf("%.3f", key[i][j]) : 0;
            j++;
            printf(((j < nbcol) ? "\t" : "\0"));
        }
        printf("\n");
        i++;
    }
}

void    display_mess_decrypted(double **key, int nbcol, int *mess)
{
    int i = 1;
    int j = 0;
    int k = 0;
    double pool = 0;

    while (i < mess[0]) {
        k = 0;
        while (k < nbcol) {
            j = 0;
            pool = 0;
            while (i + j < mess[0] && j < nbcol)
                pool += mess[i + j] * key[j++][k];
            ((char)(pool + 0.5) != 0) ? printf("%c", (char)(pool + 0.5)) : 0;
            k++;
        }
        i += k;
    }
    printf("\n");
}

double  **invert(int **key, int nbcol, int *mess)
{
    double **trix = matrix(key, nbcol, 0);
    double **id = matrix(key, nbcol, 1);

    if (invert_matrix(trix, id, nbcol) == 84)
        return (NULL);
    free(trix);
    my_printf("Key matrix:\n");
    display_reverse_matrix(id, nbcol);
    printf("\nDecrypted message:\n");
    display_mess_decrypted(id, nbcol, mess);
    return (id);
}

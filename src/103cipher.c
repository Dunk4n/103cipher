/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** encrypt messages
*/

#include <stdlib.h>
#include "lucifer.h"

void    display_key_matrix(int **tab)
{
    int nbcol = 0;
    int i = 0;
    int j = 0;
    int nbchar = 0;

    my_printf("Key matrix:\n");
    while (tab[nbcol] != 0)
        nbcol++;
    while (i < nbcol ) {
        j = 0;
        while (j < nbcol) {
            nbchar = my_printf("%d", tab[i][j++]);
            my_printf(((j < nbcol) ? "\t" : "\0"));
        }
        my_printf("\n");
        i++;
    }
}

int     **matrix_key(char *str)
{
    int i = 2;
    int j = 0;
    int k = -1;
    int n = 0;
    int **tab;

    while ((my_strlen(str) - 1) / (i * i) != 0)
        i++;
    tab = malloc(sizeof(int*) * (i + 1));
    tab[i] = 0;
    while (j < i) {
        k = -1;
        tab[j] = malloc(sizeof(int) * i);
        while (++k < i)
            tab[j][k] = ((n + k < my_strlen(str)) ? str[n + k] : 0);
        n += k;
        j++;
    }
    return (tab);
}

void    matrix_mess(char **av, int nbcol, int **key)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int pool = 0;

    while (i < my_strlen(av[1]) && av[1][i] != '\0') {
        k = 0;
        while (k < nbcol) {
            j = 0;
            pool = 0;
            while (i + j < my_strlen(av[1]) && j < nbcol)
                pool += av[1][i + j] * key[j++][k];
            my_printf("%d", pool);
            my_printf(((i + nbcol) / nbcol + k < my_strlen(av[1]) / nbcol +
nbcol + ((my_strlen(av[1]) % nbcol == 0) ? -1 : 0)) ? " " : "\n");
            k++;
        }
        i += k;
    }
}

int cipher (char **av)
{
    int **key = matrix_key(av[2]);
    int nbcol = 0;

    while (key[nbcol] != 0)
        nbcol++;
    display_key_matrix(key);
    my_printf("\nEncrypted message:\n");
    deter(key, nbcol);
    //matrix_mess(av, nbcol, key);
    return (0);
}

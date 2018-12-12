/*
** EPITECH PROJECT, 2018
** cipher
** File description:
** encrypt messages
*/

#include <stdlib.h>
#include "my.h"
#include "lucifer.h"

void    display_key_matrix(int **tab, int nbcol)
{
    int i = 0;
    int j = 0;

    while (i < nbcol ) {
        j = 0;
        while (j < nbcol) {
            my_printf("%d", tab[i][j++]);
            my_printf(((j < nbcol) ? "\t" : "\0"));
        }
        my_printf("\n");
        i++;
    }
}

int     **matrix_key(char *str)
{
    int i = 1;
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

int     *mess_to_int(char *mess)
{
    int *res;
    int i = 0;
    char **tab = my_str_to_word_array(mess, ' ');

    while (tab[i++] != 0);
    if ((res = malloc(sizeof(int) * (i + 1))) == NULL)
        return (NULL);
    res[0] = i;
    i = -1;
    while (tab[++i] != 0) {
        res[i + 1] = my_getnbr(tab[i]);
        free(tab[i]);
    }
    free(tab);
    return (res);
}

int     cipher (char **av, int chx)
{
    int **key = matrix_key(av[2]);
    int *int_mess;
    int nbcol = 0;

    while (key[nbcol] != 0)
        nbcol++;
    if (chx == 0) {
        my_printf("Key matrix:\n");
        display_key_matrix(key, nbcol);
        my_printf("\nEncrypted message:\n");
        matrix_mess(av, nbcol, key);
        return (0);
    }
    if ((int_mess = mess_to_int(av[1])) == NULL)
        return (84);
    if (invert(key, nbcol, int_mess) == NULL)
        return (84);
    return (0);
}

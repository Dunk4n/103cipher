/*
** EPITECH PROJECT, 2018
** lucifer
** File description:
** header of 103cipher
*/

#ifndef LUCIFER
#define LUCIFER

#include "my.h"

int     check_error(int ac, char **av);
int     cipher (char **av, int chx);
int     deter(int **key, int col);
void    invert_matrix(double **key, double **id, int nbcol);
void    display_key_matrix(int **tab, int nbcol);
double  **invert(int **key, int nbcol, int *mess);

#endif

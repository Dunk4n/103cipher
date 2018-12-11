/*
** EPITECH PROJECT, 2018
** inverted
** File description:
** try not to segfault, good luck :)
*/

#include <stdlib.h>
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

int     **invert(int **key)
{
    
}

double  **yek(int **key)
{
    
}

/*
** EPITECH PROJECT, 2018
** mylib
** File description:
** Display a number given as a parameter.
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0 && nb != -2147483648) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10 && nb != -2147483648) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    } else if (nb != -2147483648) {
        my_putchar(nb + '0');
    }
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        my_put_nbr(147483648);
    }
}
/*
** EPITECH PROJECT, 2018
** putnbr err
** File description:
** prints a number into stderr
*/

#include "my.h"

int my_puterr_nbr(int nb)
{
    if (nb < 0 && nb != -2147483648) {
        my_puterr('-');
        nb = -nb;
    }
    if (nb >= 10 && nb != -2147483648) {
        my_puterr_nbr(nb / 10);
        my_puterr(nb % 10 + '0');
    } else if (nb != -2147483648) {
        my_puterr(nb + '0');
    }
    if (nb == -2147483648) {
        my_puterr('-');
        my_puterr('2');
        my_puterr_nbr(147483648);
    }
}

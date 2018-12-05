/*
** EPITECH PROJECT, 2018
**
** File description:
** returns the smallest prime number that is greater than or
** equal to nb.
*/

static int my_is_prime2(int nb2)
{
    if (nb2 < 0)
        return (0);
    else if (nb2 <= 1)
        return (2);
    for (int i = 2; i < nb2; i++) {
        if (nb2 % i == 0)
            return (0);
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    int i = nb + 1;

    if (nb < 0)
        return (0);
    else if (nb <= 1)
        return (2);
    while (!my_is_prime2(i)) {
        i++;
    }
    if (i < 2147483647)
        return (i);
    else
        return (0);
}
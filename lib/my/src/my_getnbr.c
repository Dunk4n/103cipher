/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** returns a number found in a string
*/

int my_getnbr(char const *str)
{
    int is_neg;
    int i;
    int result;

    is_neg = 1;
    i = 0;
    result = 0;
    while (str[i] != '\0' && (str[i] == '+' || str[i] == '-')) {
        if (str[i] == '-')
            is_neg = is_neg * - 1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10;
        result = result + (str[i] - '0');
        if ((result != -2147483648 || is_neg == 1) && result < 0)
            return (0);
        i++;
    }
    return (result * is_neg);
}

/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_put_nbr_base
*/

#include "../../include/my.h"
#include <stdio.h>

int my_put_nbr_base(int nbr, char const *base)
{
    int len = my_strlen(base);

    if (nbr < -2147483648 + len || nbr > 2147483647 - len)
        return 0;
    if (nbr < 0) {
        nbr = nbr * (-1);
    }
    if (nbr > len - 1) {
        my_put_nbr_base(nbr / len, base);
        my_put_nbr_base(nbr % len, base);
    }
    if (nbr >= 0 && nbr <= len - 1) {
        my_putchar(base[nbr]);
    }
    return 0;
}

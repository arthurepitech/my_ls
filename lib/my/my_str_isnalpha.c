/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_str_isnalpha
*/

#include "../../include/my.h"

int my_str_isnalpha(char const *str, int n)
{
    if ((str[n] >= 'a' && str[n] <= 'z') || (str[n] >= 'A' && str[n] <= 'Z'))
        return 1;
    else if (str[n] >= '0' && str[n] <= '9')
        return 2;
    return 0;
}

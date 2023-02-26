/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** Day04
*/

#include <stddef.h>

int my_getnbr(char const *str)
{
    int res = 0;
    char isneg = -1;
    int i = 0;
    int count = 0;

    if (str == NULL)
        return 0;
    for (; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-')
            isneg *= -1;
    }
    for (; str[i] >= '0' && str[i] <= '9'; i++, count++)
        res = res * 10 - (str[i] - '0');
    if ((res * isneg <= -2147483647 && isneg == -1 && count == 10)
        || (res * isneg >= 2147483647 && isneg == 1 && count == 10)
        || count > 10)
        return 0;
    return res * isneg;
}

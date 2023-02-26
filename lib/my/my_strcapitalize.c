/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_strcapitalize
*/

#include "../../include/my.h"
#include <stddef.h>
#include <stdio.h>

int my_str_isnalpha(char const *str, int n)
{
    if ((str[n] >= 'a' && str[n] <= 'z') || (str[n] >= 'A' && str[n] <= 'Z'))
        return 1;
    else if (str[n] >= '0' && str[n] <= '9')
        return 2;
    return 0;
}

char *my_strcapitalize(char *str)
{
    if (str == NULL)
        return NULL;
    str = my_strlowcase(str);
    if (my_str_isnalpha(str, 0) == 1)
        str[0] = str[0] - 32;
    for (int i = 1; str[i] != '\0'; i++) {
        if (my_str_isnalpha(str, i - 1) == 0 && my_str_isnalpha(str, i) == 1)
            str[i] = str[i] - 32;
    }
    return str;
}

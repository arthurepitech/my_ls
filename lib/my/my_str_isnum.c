/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_str_isnum
*/

#include <stdlib.h>

int my_strlen(char const *str);

int my_str_isnum(char *str)
{
    int i = 0;
    if (str == NULL)
        return 1;
    for (; str[i] >= '0' && str[i] <= '9' && str[i] != '\0'; i++);
    if (i == my_strlen(str))
        return 1;
    return 0;
}

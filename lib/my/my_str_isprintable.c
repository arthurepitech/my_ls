/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_str_isprintable
*/

#include <stdlib.h>

int my_strlen(char const *str);

int my_str_isprintable(char const *str)
{
    int i = 0;
    if (str == NULL)
        return 1;
    for (; str[i] >= ' ' && str[i] <= '~' && str[i] != '\0'; i++);
    if (i == my_strlen(str))
        return 1;
    return 0;
}

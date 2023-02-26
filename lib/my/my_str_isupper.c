/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_str_isupper
*/

#include <stdlib.h>

int my_strlen(char const *str);

int my_str_isupper(char const *str)
{
    int i = 0;
    if (str == NULL)
        return 1;
    for (; str[i] >= 'A' && str[i] <= 'Z' && str[i] != '\0'; i++);
    if (i == my_strlen(str))
        return 1;
    return 0;
}

/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** Day07
*/

#include <stddef.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;
    for (; src[i] != '\0' ; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}

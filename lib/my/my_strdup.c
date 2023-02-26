/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** Day08
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *dup = malloc(sizeof(char) * my_strlen(src) + 1);
    int i = 0;
    for (; src[i] != '\0'; i++)
        dup[i] = src[i];
    dup[i] = '\0';
    return dup;
}

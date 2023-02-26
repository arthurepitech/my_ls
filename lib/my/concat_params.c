/*
** EPITECH PROJECT, 2022
** concat_params.c
** File description:
** Day08
*/

#include <stdlib.h>

char *concat_params(int ac, char **av)
{
    int size = 0;
    int count = 0;
    char *params = NULL;
    for (int i = 0; av[i] != NULL; i++) {
        for (int x = 0; av[i][x] != '\0'; x++)
            size++;
    }
    params = malloc(sizeof(char) * size + ac);
    for (int i = 0; av[i] != NULL; i++, count++) {
        for (int x = 0; av[i][x] != '\0'; x++, count++)
            params[count] = av[i][x];
        if (count < size)
            params[count] = '\n';
    }
    return params;
}

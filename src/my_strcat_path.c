/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** my_strcat_path
*/

#include "../include/my_ls.h"
#include <stddef.h>
#include <stdlib.h>

char *my_strcat_path(char *path, char *file)
{
    char *buffer = malloc(sizeof(char) * (my_strlen(path) + my_strlen(file) + 2));
    int i = 0;
    for (; path[i] != '\0'; i++)
        buffer[i] = path[i];
    if (path[i - 1] != '/')
        buffer[i++] = '/';
    for (int j = 0; file[j] != '\0'; j++)
        buffer[i++] = file[j];
    buffer[i] = '\0';
    return buffer;
}
/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** Day03
*/

#include <unistd.h>

void my_putchar(char c);

void my_putstr(char *c)
{
    for (int i = 0; c[i] != '\0'; i++)
        my_putchar(c[i]);
}

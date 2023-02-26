/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** Day04
*/

#include <stdio.h>

void my_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

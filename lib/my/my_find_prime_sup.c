/*
** EPITECH PROJECT, 2022
** my_find_prime_sup.c
** File description:
** Day05
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    for (; my_is_prime(nb) != 1; nb++);
    return nb;
}

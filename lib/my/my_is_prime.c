/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** Day05
*/

int my_is_prime(int nb)
{
    int count = 0;
    if (nb <= 1 || nb > 2147483647)
        return 0;
    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0)
            count++;
    }
    if (count == 2)
        return 1;
    return 0;
}

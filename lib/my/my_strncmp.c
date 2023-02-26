/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_strncmp
*/

#include <stddef.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    if (n <= 0)
        return 0;
    if (s1 == NULL)
        return -1;
    if (s2 == NULL)
        return 1;
    for (; s1[i] != '\0' && s2[i] != '\0' && i < n; i++) {
        if (s1[i] < s2[i])
            return -(s2[i] - s1[i]);
        if (s1[i] > s2[i])
            return (s1[i] - s2[i]);
    }
    return 0;
}

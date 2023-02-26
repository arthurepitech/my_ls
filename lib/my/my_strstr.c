/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_strstr
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

int check_cmp(char *str, char const *to_find, int i)
{
    int x = 0;
    for (; str[i] == to_find[x] && str[i] != '\0'; x++, i++);
    if (x == my_strlen(to_find))
        return 1;
    return 0;
}

char *my_strstr(char *str, char const *to_find)
{
    if (to_find == NULL || str == NULL)
        return NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        if (check_cmp(str, to_find, i) == 1)
            return &str[i];
    }
    return NULL;
}

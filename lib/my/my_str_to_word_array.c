/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** Day08
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char const *src);
int my_alphanum(char const str);

int word_len(char const *str)
{
    int i = 0;
    int count = 0;
    for (; my_alphanum(str[i]) == 0; i++);
    for (; my_alphanum(str[i]) == 1; i++)
        count++;
    return count;
}

int array_len(char const *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 && my_alphanum(str[i]) == 1)
            count++;
        if (i > 0 && (my_alphanum(str[i]) == 1
            && my_alphanum(str[i - 1]) == 0))
            count++;
    }
    return count;
}

char **copy_str_in_array(char *str, char **array, int size)
{
    int y = 0;
    int c = 0;
    int x = 0;
    for (; my_alphanum(str[x]) == 0; x++);
    str = &str[x];
    for (int i = 0; i < size; i++) {
        y = 0;
        c = 0;
        for (; y < word_len(str); y++)
            array[i][y] = str[y];
        array[i][y] = '\0';
        for (; my_alphanum(str[word_len(str) + c]) == 0; c++);
        str = &str[word_len(str) + c];
    }
    return array;
}

char **my_str_to_word_array(char const *str)
{
    char **array = NULL;
    char *strcp = my_strdup(str);
    char *str_cpy = my_strdup(str);
    int c = 0;
    int i = 0;
    array = malloc(sizeof(char *) * array_len(strcp) + 1);
    for (; i < array_len(str); i++) {
        c = 0;
        array[i] = malloc(sizeof(char) * word_len(strcp) + 1);
        for (; my_alphanum(strcp[word_len(strcp) + c]) == 0; c++);
        strcp = &strcp[word_len(strcp) + c];
    }
    copy_str_in_array(str_cpy, array, array_len(str));
    array[i] = NULL;
    return array;
}

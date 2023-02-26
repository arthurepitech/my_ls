/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_strcmp
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int s1len = my_strlen(s1);
    int s2len = my_strlen(s2);
    for (; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] < s2[i])
            return -(s2[i] - s1[i]);
        if (s1[i] > s2[i])
            return (s1[i] - s2[i]);
    }
    if (s1len < s2len)
        return -(s2len - s1len);
    if (s1len > s2len)
        return (s1len - s2len);
    return 0;
}

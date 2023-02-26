/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_alphanum
*/

int my_alphanum(char const str)
{
    if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')
        || (str >= '0' && str <= '9'))
        return 1;
    else
        return 0;
}

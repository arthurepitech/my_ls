/*
** EPITECH PROJECT, 2022
** my_showstr
** File description:
** Day06
*/

#include "../../include/my.h"

int my_showstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] > 126) {
            my_putchar('\\');
            my_put_nbr_base(str[i], "0123456789abcdef");
        } else
            my_putchar(str[i]);
    }
    return 0;
}

int main(void)
{
    my_showstr("I like \n ponies!");
    return 0;
}

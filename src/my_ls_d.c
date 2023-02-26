/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls_d
*/

#include "../include/my_ls.h"

void my_ls_d(char *path)
{
    my_putstr(path);
    my_putchar('\n');
}

void need_flag_d(my_info_t *info)
{
    info->flag.d = true;
}

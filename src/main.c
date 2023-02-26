/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** main
*/

#include "../include/my_ls.h"
#include <stddef.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

void init_strucuture(my_info_t *info, int ac)
{
    info->path = malloc(sizeof(char *) * ac);
    info->path[0] = ".";
    info->ac = ac;
    info->flag.h = 0;
    info->flag.a = 0;
    info->flag.d = 0;
    info->flag.l = 0;
    info->flag.r = 0;
    info->flag.m = 0;
    info->nb_path = 0;
    info->printed = false;
    info->nb_flag = 0;
    info->date_l = malloc(sizeof(char) * 36);
    info->month_l = malloc(sizeof(char) * 8);
}

int main(int ac, char **av)
{
    my_info_t *info = malloc(sizeof(my_info_t));
    init_strucuture(info, ac);
    if (ac == 1)
        my_ls_basic(".");
    else
        get_params(ac, av, info);
    free(info);
    return 0;
}

/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** get_info
*/

#include "../include/my_ls.h"
#include <stddef.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

void print_invalid_flag(char *flag)
{
    my_putstr("my_ls: invalid option -- '");
    my_putchar(flag[1]);
    my_putstr("'\nTry 'my_ls --help' for more information.\n");
    exit(84);
}

int check_short_flag(char *flag, int i)
{
    char short_format[LEN] = {'h', 'a', 'd', 'l', 'r', 'm'};
    for (int f = 0; flag[f] != '\0'; f++) {
        if (flag[f] == short_format[i])
            return 1;
    }
    return 0;
}

void check_flag(char *flag, my_info_t *info)
{
    int done = 0;
    char *long_format[LEN] = {"--help", "--all", "--directory",
        "--long-listing", "--reverse", "--comma"};
    void (*get_format[LEN])(my_info_t *info) = {need_flag_h, need_flag_a,
        need_flag_d, need_flag_l, need_flag_r, need_flag_m};
    for (int i = 0; i < LEN; i++) {
        if (my_strcmp(flag, long_format[i]) == 0) {
            (*get_format[i])(info);
            done++;
            info->nb_flag++;
        }
        if (check_short_flag(flag, i) == 1) {
            (*get_format[i])(info);
            done++;
            info->nb_flag++;
        }
    }
    if (done == 0)
        print_invalid_flag(flag);
}

void get_params(int ac, char **av, my_info_t *info)
{
    for (int i = 1; i < ac; i++) {
        if (av[i][0] == '-') {
            check_flag(av[i], info);
        } else {
            info->path[info->nb_path] = av[i];
            check_if_exist_dir(info->path[info->nb_path]);
            info->nb_path++;
        }
    }
    if (info->nb_path == 0) {
        info->path[0] = ".";
        info->path[1] = NULL;
    }
    print_ls(info);
}

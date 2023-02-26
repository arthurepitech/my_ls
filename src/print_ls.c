/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** print_ls
*/

#include "../include/my_ls.h"
#include <stddef.h>
#include <stdlib.h>

void print_flag_l(my_info_t *info, int i)
{
    if (info->flag.l == true && info->flag.d == true) {
        my_ls_l(info, ".");
        info->printed = true;
    } else if (info->flag.l == true) {
        my_ls_l(info, info->path[i]);
        info->printed = true;
    } else {
        return;
    }
}

void print_flag_a(my_info_t *info, int i)
{
    if (info->flag.a == true) {
        if (info->flag.l == true) {
            my_ls_l(info, info->path[i]);
            info->printed = true;
        } else {
            my_ls_a(info->path[i]);
            info->printed = true;
        }
    } else if (info->flag.m == true) {
        my_ls_m(info->path[i]);
        info->printed = true;
    } else {
        print_flag_l(info, i);
    }
}

void print_whithout_flag(my_info_t *info)
{
    if (info->nb_flag == 0) {
        for (int i = 0; info->path[i] != NULL; i++) {
            my_ls_basic(info->path[i]);
        }
        exit(0);
    }
}

void print_ls(my_info_t *info)
{
    print_whithout_flag(info);
    for (int i = 0; info->path[i] != NULL; i++) {
        if (info->flag.h == true) {
            print_help(info);
            exit(0);
        }
        if (info->nb_path > 1) {
            my_putstr(info->path[i]);
            my_putstr(":\n");
        }
        print_flag_a(info, i);
        if (info->flag.r == true && info->printed == false)
            my_ls_r(info->path[i]);
        if (info->flag.d == true && info->printed == false)
            my_ls_d(info->path[i]);
        if (i + 1 < info->nb_path)
            my_putchar('\n');
    }
}

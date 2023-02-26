/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls_fmaj
*/

#include "../include/my_ls.h"
#include <stddef.h>
#include <dirent.h>
#include <stdlib.h>

void print_fmaj(my_info_t *info)
{
    if (S_ISDIR(info->st.st_mode))
        my_putchar('/');
    if ((info->st.st_mode & S_IXUSR) || (info->st.st_mode & S_IXGRP)
        || (info->st.st_mode & S_IXGRP))
        my_putchar('*');
}

void my_ls_fmaj(my_info_t *info)
{
    info->F = true;
}

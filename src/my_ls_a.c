/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls_a
*/

#include "../include/my_ls.h"
#include <stddef.h>
#include <dirent.h>
#include <stdlib.h>

void my_ls_a(char *path)
{
    struct dirent *dirent;
    check_if_exist_dir(path);
    DIR *dir = opendir(path);
    for (int i = 0; (dirent = readdir(dir)) != NULL; i++) {
        if (i > 0)
            my_putstr("  ");
        my_putstr(dirent->d_name);
    }
    my_putchar('\n');
    closedir(dir);
}

void need_flag_a(my_info_t *info)
{
    info->flag.a = true;
}

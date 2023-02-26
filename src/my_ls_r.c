/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls_r
*/

#include "../include/my_ls.h"
#include <stddef.h>
#include <dirent.h>
#include <stdlib.h>

void my_ls_r(char *path)
{
    char **content = malloc(sizeof(char *) * 70);
    int tmp = 0;
    struct dirent *dirent;
    DIR *dir = opendir(path);
    for (int i = 0; (dirent = readdir(dir)) != NULL; i++) {
        if (dirent->d_name[0] != '.') {
            content[tmp] = dirent->d_name;
            tmp++;
        }
    }
    tmp--;
    for (int i = 0; tmp >= i; tmp--) {
        my_putstr(content[tmp]);
        if (tmp != i)
            my_putstr("  ");
    }
    my_putchar('\n');
    free(content);
}

void need_flag_r(my_info_t *info)
{
    info->flag.r = true;
}

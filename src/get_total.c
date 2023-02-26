/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** get_total
*/

#include "../include/my_ls.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stddef.h>

void get_total_size(my_info_t *info, char *path)
{
    struct stat st;
    struct dirent *dirent;
    DIR *dir = opendir(path);
    while ((dirent = readdir(dir)) != NULL) {
        stat(my_strcat_path(path, dirent->d_name), &st);
        if (info->flag.a == true)
            info->total_l += st.st_blocks / 2;
        if (dirent->d_name[0] != '.' && info->flag.a == false)
            info->total_l += st.st_blocks / 2;
    }
    my_put_nbr((info->total_l));
}

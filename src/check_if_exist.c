/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** check_if_exist
*/

#include "../include/my_ls.h"
#include <dirent.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>

void check_if_exist_dir(char *path)
{
    DIR *dir = opendir(path);
    if (dir == NULL) {
        my_putstr("my_ls: cannot access '");
        my_putstr(path);
        my_putstr("': No such file or directory\n");
        exit(84);
    }
}

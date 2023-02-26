/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls_l
*/

#include "../include/my_ls.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stddef.h>
#include <dirent.h>
#include <stdlib.h>

void print_size(my_info_t *info)
{
    int size = my_intlen(info->st.st_size) - 6;
    for (; size < 0; size++)
        my_putchar(' ');
}

void print_all_utils(my_info_t *info, struct dirent *dirent)
{
    my_putchar(' ');
    print_size(info);
    my_put_nbr(info->st.st_size);
    my_putchar(' ');
    my_putstr(info->month_l);
    my_putstr(" ");
    my_putstr(info->date_l);
    my_putchar(' ');
    my_putstr(dirent->d_name);
    my_putchar('\n');
}

void print_utils(my_info_t *info, struct dirent *dirent, char *path)
{
    // my_putstr(my_strcat_path(path, dirent->d_name));
    // my_putchar('\n');
    stat(my_strcat_path(path, dirent->d_name), &info->st);
    info->pw = getpwuid(info->st.st_uid);
    info->gr = getgrgid(info->st.st_gid);
    get_date(info);
    get_chmod(info->st);
    my_putchar(' ');
    my_put_nbr(info->st.st_nlink);
    my_putchar(' ');
    my_putstr(info->pw->pw_name);
    my_putchar(' ');
    my_putstr(info->gr->gr_name);
    print_all_utils(info, dirent);
}

void my_ls_l(my_info_t *info, char *path)
{
    struct dirent *dirent;
    check_if_exist_dir(path);
    DIR *dir = opendir(path);
    my_putstr("total ");
    get_total_size(info, path);
    my_putchar('\n');
    while ((dirent = readdir(dir)) != NULL) {
        if (info->flag.a == true)
            print_utils(info, dirent, path);
        if (dirent->d_name[0] != '.' && info->flag.a == false)
            print_utils(info, dirent, path);
    }
    closedir(dir);
}

void need_flag_l(my_info_t *info)
{
    info->flag.l = true;
}

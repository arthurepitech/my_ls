/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_get_chmod
*/

#include "../include/my_ls.h"

void get_chmod(struct stat st)
{
    if (S_ISDIR(st.st_mode))
        my_putchar('d');
    else
        my_putchar('-');
    my_putchar((st.st_mode & S_IRUSR) ? 'r' : '-');
    my_putchar((st.st_mode & S_IWUSR) ? 'w' : '-');
    my_putchar((st.st_mode & S_IXUSR) ? 'x' : '-');
    my_putchar((st.st_mode & S_IRGRP) ? 'r' : '-');
    my_putchar((st.st_mode & S_IWGRP) ? 'w' : '-');
    my_putchar((st.st_mode & S_IXGRP) ? 'x' : '-');
    my_putchar((st.st_mode & S_IROTH) ? 'r' : '-');
    my_putchar((st.st_mode & S_IWOTH) ? 'w' : '-');
    my_putchar((st.st_mode & S_IXOTH) ? 'x' : '-');
}

/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** get_date
*/

#include "../include/my_ls.h"
#include <stddef.h>
#include <time.h>

void get_date(my_info_t *info)
{
    char *date = NULL;
    date = ctime(&info->st.st_mtime);
    date += 4;
    my_strlowcase(date);
    info->month_l[0] = date[0] - 32;
    for (int i = 1; i < 3; i++)
        info->month_l[i] = date[i];
    info->month_l[3] = '\0';
    date += 4;
    if (date[3] == ' ')
        date++;
    date[8] = '\0';
    info->date_l = date;
}

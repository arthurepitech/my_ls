/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** print_help
*/

#include "../include/my_ls.h"

void print_help(my_info_t *info)
{
    (void)(info);
    my_putstr("Usage: ls [OPTION]... [FILE]...\n");
    my_putstr("List information about the FILEs");
    my_putstr("(the current directory by default).\n\n");
    my_putstr("Mandatory arguments to long options are");
    my_putstr("mandatory for short options too.\n");
    my_putstr("  -a, --all                  do not ignore entries");
    my_putstr(" starting with .\n");
    my_putstr("  -d, --directory            list directory entries");
    my_putstr(" instead of contents\n");
    my_putstr("  -h, --help                 display this help and exit\n");
    my_putstr("  -l, --long                 use a long listing format\n");
    my_putstr("  -r, --reverse              reverse order while sorting\n");
    my_putstr("  -m, --comma                fill width with a comma");
    my_putstr("separated list of entries\n");
}

void need_flag_h(my_info_t *info)
{
    info->flag.h = true;
}

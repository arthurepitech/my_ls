/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#ifndef MY_LS_H_
    #define MY_LS_H_
    #define LEN 6
    #include <stdbool.h>
    #include <sys/stat.h>
    #include <pwd.h>
    #include <grp.h>
    #include <dirent.h>
    #include "../include/my.h"

typedef struct flag_e{
    bool h;
    bool a;
    bool d;
    bool l;
    bool r;
    bool m;
} flag_t;

typedef struct my_info_s {
    struct stat st;
    struct passwd *pw;
    struct group *gr;
    int ac;
    char **path;
    int nb_path;
    char *date_l;
    char *month_l;
    int total_l;
    bool printed;
    int nb_flag;
    flag_t flag;
} my_info_t;

void print_help(my_info_t *info);

void get_params(int ac, char **av, my_info_t *info);
void check_flag(char *flag, my_info_t *info);

void check_if_exist_file(char *path);
void check_if_exist_dir(char *path);

void my_ls_basic(char *path);
void my_ls_a(char *path);
void my_ls_d(char *path);
void my_ls_l(my_info_t *info, char *path);
void my_ls_r(char *path);
void my_ls_m(char *path);

void need_flag_h(my_info_t *info);
void need_flag_a(my_info_t *info);
void need_flag_d(my_info_t *info);
void need_flag_l(my_info_t *info);
void need_flag_r(my_info_t *info);
void need_flag_m(my_info_t *info);

void get_chmod(struct stat st);
void get_total_size(my_info_t *info, char *path);
void get_date(my_info_t *info);
char *my_strcat_path(char *path, char *file);

void print_ls(my_info_t *info);

#endif /* !MY_LS_H_ */

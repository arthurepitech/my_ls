/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** Day05
*/

int my_compute_square_root(int nb)
{
    int root = nb;
    for (; root >= 0; --root) {
        if ((root * root) == nb)
            return root;
    }
    return 0;
}

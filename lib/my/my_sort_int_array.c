/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_sort_int_array
*/

void sort_all(int y, int *array, int tmp)
{
    if (array[y] > array[y + 1]) {
        tmp = array[y];
        array[y] = array[y + 1];
        array[y + 1] = tmp;
    }
}

void my_sort_int_array(int *array, int size)
{
    int tmp = 0;

    for (int i = 0; i < size; i++) {
        for (int y = 0; y < size - 1; y++)
            sort_all(y, array, tmp);
    }
}

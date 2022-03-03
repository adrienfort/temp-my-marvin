/*
** EPITECH PROJECT, 2021
** Librairy
** File description:
** write a str a nb of times
*/

#include "lib.h"

void write_str_nb_times(const char *str, int nb_times)
{
    for (int i = 0; i < nb_times; ++i)
        write_msg(str);
}

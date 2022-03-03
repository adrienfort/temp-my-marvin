/*
** EPITECH PROJECT, 2021
** Params Handler
** File description:
** returns SUCCESS if valid params
*/

#include "params_handler.h"
#include "lib.h"
#include "macros.h"

int valid_params(int ac, char **av)
{
    int nb_lines = 0;
    int max_maches_to_remove = 0;

    if (ac != 3)
        return INVALID_PARAMS;

    if (str_contains_only_digits(av[1]) != 0 || \
        str_contains_only_digits(av[2]) != 0)
        return INVALID_PARAMS;

    nb_lines = my_atoi(av[1]);
    max_maches_to_remove = my_atoi(av[2]);
    if (nb_lines <= 1 || nb_lines >= 100 || max_maches_to_remove <= 0)
        return INVALID_PARAMS;

    return YES;
}

/*
** EPITECH PROJECT, 2021
** main
** File description:
** calls functions
*/

#include "lib.h"
#include "macros.h"
#include "matchstick.h"

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        display_help();
        return SUCCESS;
    }
    return launch_matchstick(ac, av);
}

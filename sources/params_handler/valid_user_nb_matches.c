/*
** EPITECH PROJECT, 2021
** Params Handler
** File description:
** valid user's nb_matches to remove choice
*/

#include "params_handler.h"
#include "lib.h"
#include "macros.h"

int valid_user_nb_matches(game_t *game, int line, int nb_matches)
{
    if (nb_matches == 0) {
        write_msg("Error: you have to remove at least one match\n");
        return NO;
    }
    if (nb_matches > game->max_matches_to_remove) {
        write_msg("Error: you cannot remove more than ");
        write_nb(game->max_matches_to_remove, 1);
        write_msg(" matches per turn\n");
        return NO;
    }
    if (nb_matches > game->matches_per_lines[line]) {
        write_msg("Error: not enough matches on this line\n");
        return NO;
    }
    return YES;
}

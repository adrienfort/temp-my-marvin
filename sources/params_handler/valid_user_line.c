/*
** EPITECH PROJECT, 2021
** Params Handler
** File description:
** valid the user's line choice
*/

#include "params_handler.h"
#include "lib.h"
#include "macros.h"

int valide_user_line(game_t *game, int line)
{
    if (line > game->nb_lines || line == 0) {
        write_msg("Error: this line is out of range\n");
        return NO;
    }
    if (game->matches_per_lines[line - 1] == 0) {
        write_msg("Error: this line has no matches\n");
        return NO;
    }
    return YES;
}

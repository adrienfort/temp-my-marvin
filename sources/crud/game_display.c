/*
** EPITECH PROJECT, 2021
** Project Name
** File description:
** display the game's matches
*/

#include "game.h"
#include "lib.h"

static void display_line_game(int nb_lines, int nb_matches, int line)
{
    write_msg("*");
    for (int i = 0; i < nb_lines - 1 - line; i += 1)
        write_msg(" ");
    for (int i = 0; i < nb_matches; i += 1)
        write_msg("|");
    for (int i = 0; i < nb_lines + line - nb_matches; i += 1)
        write_msg(" ");
    write_msg("*");
}

void game_display(game_t *game)
{
    int nb_matches = 0;
    int nb_lines = game->nb_lines;
    int width = (game->nb_lines - 1) * 2 + 3;

    for (int line = -1; line <= game->nb_lines; ++line) {
        if (line == -1 || line == game->nb_lines) {
            write_str_nb_times("*", width);
        }
        else {
            nb_matches = game->matches_per_lines[line];
            display_line_game(nb_lines, nb_matches, line);
        }
        write_msg("\n");
    }
}

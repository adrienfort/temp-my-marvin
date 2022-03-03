/*
** EPITECH PROJECT, 2021
** Matchstick
** File description:
** play the ia turn
*/

#include "matchstick.h"
#include "macros.h"
#include "lib.h"

static int get_ia_line(game_t *game)
{
    int line = random() % game->nb_lines;

    if (game->matches_per_lines[line] == 0)
        return get_ia_line(game);
    return line;
}

static int get_ia_nb_matches_to_remove(game_t *game, int line)
{
    int line_matches = game->matches_per_lines[line];
    int max_matches = game->max_matches_to_remove;
    int max = (line_matches >= max_matches) ? max_matches : line_matches;
    int nb_matches = (random() % max) + 1;

    return nb_matches;
}

static void update_game_from_ia_turn(game_t *game, int line, int nb_matches)
{
    game->matches_per_lines[line] -= nb_matches;
    write_msg("AI removed ");
    write_nb(nb_matches, 1);
    write_msg(" match(es) from line ");
    write_nb(line + 1, 1);
    write_msg("\n");
}

int turn_ia(game_t *game)
{
    int line = 0;
    int nb_matches_removed = 0;

    write_msg("\nAI's turn...\n");
    line = get_ia_line(game);
    nb_matches_removed = get_ia_nb_matches_to_remove(game, line);
    update_game_from_ia_turn(game, line, nb_matches_removed);
    return SUCCESS;
}

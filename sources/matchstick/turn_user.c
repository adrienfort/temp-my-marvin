/*
** EPITECH PROJECT, 2021
** Matchstick
** File description:
** play user turn
*/

#include "matchstick.h"
#include "lib.h"
#include "macros.h"
#include "params_handler.h"

static int get_user_line(game_t *game)
{
    int line = 0;
    char *str = NULL;
    int valid_input = 0;
    int valid_line = 0;

    write_msg("Line: ");
    str = get_user_input();
    valid_input = valid_user_input(str);
    if (valid_input == NO)
        return get_user_line(game);
    else if (valid_input != YES)
        return valid_input;
    line = my_atoi(str);
    free(str);
    valid_line = valide_user_line(game, line);
    if (valid_line != YES)
        return get_user_line(game);
    return line - 1;
}

static int get_user_nb_matches_to_remove(game_t *game, int line)
{
    int nb_matches = 0;
    char *str = NULL;
    int valid_input = 0;
    int valid_nb_matches = 0;

    write_msg("Matches: ");
    str = get_user_input();
    valid_input = valid_user_input(str);
    if (valid_input == NO)
        return INVALID_NB_MATCHES;
    else if (valid_input != YES)
        return valid_input;
    nb_matches = my_atoi(str);
    free(str);
    valid_nb_matches = valid_user_nb_matches(game, line, nb_matches);
    if (valid_nb_matches != YES)
        return INVALID_NB_MATCHES;
    return nb_matches;
}

static void update_game_from_user_turn(game_t *game, int line, int nb_matches)
{
    game->matches_per_lines[line] -= nb_matches;
    write_msg("Player removed ");
    write_nb(nb_matches, 1);
    write_msg(" match(es) from line ");
    write_nb(line + 1, 1);
    write_msg("\n");
}

static int loop_turn_user(game_t *game)
{
    int line = 0;
    int nb_matches_removed = 0;

    line = get_user_line(game);
    if (line < 0)
        return line;
    nb_matches_removed = get_user_nb_matches_to_remove(game, line);
    if (nb_matches_removed == INVALID_NB_MATCHES)
        return loop_turn_user(game);
    if (nb_matches_removed < 0)
        return nb_matches_removed;
    update_game_from_user_turn(game, line, nb_matches_removed);
    return SUCCESS;
}

int turn_user(game_t *game)
{
    write_msg("\nYour turn:\n");
    return loop_turn_user(game);
}

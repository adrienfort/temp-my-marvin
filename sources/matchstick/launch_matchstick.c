/*
** EPITECH PROJECT, 2021
** Matchstick
** File description:
** valid params and launch game
*/

#include "matchstick.h"
#include "lib.h"
#include "macros.h"
#include "params_handler.h"
#include "errors_handler.h"

static int build_game(game_t *game, char **av)
{
    int nb_lines = my_atoi(av[1]);
    int max_matches_to_remove = my_atoi(av[2]);

    return game_create(game, nb_lines, max_matches_to_remove);
}

int launch_matchstick(int ac, char **av)
{
    int valid = 0;
    int build = 0;
    int execution = 0;
    game_t *game = NULL;

    valid = valid_params(ac, av);
    if (valid != YES)
        return manage_returned_value(valid);

    game = malloc(sizeof(game_t));
    build = build_game(game, av);
    if (build != SUCCESS)
        return manage_returned_value(build);

    execution = play_matchstick(game);
    return (manage_returned_value(execution));
}

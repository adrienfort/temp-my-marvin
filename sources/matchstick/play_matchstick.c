/*
** EPITECH PROJECT, 2021
** Matchstick
** File description:
** lauch the game matchstick
*/

#include "matchstick.h"
#include "lib.h"
#include "macros.h"

static int loop_matchstick(game_t *game)
{
    int turn = 0;

    game_display(game);
    while (1 == 1) {
        turn = turn_user(game);
        if (turn != SUCCESS)
            return turn;
        game_display(game);
        if (is_game_finished(game) == YES)
            return IA_WIN;
        turn = turn_ia(game);
        if (turn != SUCCESS)
            return turn;
        game_display(game);
        if (is_game_finished(game) == YES)
            return USER_WIN;
    }
    return FAILURE;
}

int play_matchstick(game_t *game)
{
    int result = 0;

    srandom(time(NULL));
    result = loop_matchstick(game);
    game_destroy(game);
    return result;
}

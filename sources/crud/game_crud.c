/*
** EPITECH PROJECT, 2021
** Game
** File description:
** CRUD game
*/

#include "lib.h"
#include "game.h"
#include "macros.h"

static int *create_game_matches_per_lines(int nb_lines)
{
    int *tab = malloc(sizeof(int) * nb_lines);

    if (tab == NULL)
        return NULL;
    for (int line = 0; line < nb_lines; ++line)
        tab[line] = line * 2 + 1;
    return tab;
}

int game_create(game_t *game, int nb_lines, int max)
{
    if (game == NULL)
        return MEMORY_FAILURE;
    game->max_matches_to_remove = max;
    game->nb_lines = nb_lines;
    game->matches_per_lines = create_game_matches_per_lines(nb_lines);
    if (game->matches_per_lines == NULL)
        return MEMORY_FAILURE;
    return SUCCESS;
}

int is_game_finished(game_t *game)
{
    for (int line = 0; line < game->nb_lines; ++line) {
        if (game->matches_per_lines[line] != 0)
            return NO;
    }
    return YES;
}

void game_destroy(game_t *game)
{
    if (game != NULL)
        free(game->matches_per_lines);
    free(game);
}

/*
** EPITECH PROJECT, 2021
** Matchstick
** File description:
** struct game_t header
*/

#ifndef GAME_H_
#define GAME_H_

#include <stdlib.h>
#include <stddef.h>

typedef struct game_s {
    int max_matches_to_remove;
    int nb_lines;
    int *matches_per_lines;
} game_t;

// CRUD
int game_create(game_t *, int, int);
int is_game_finished(game_t *);
void game_destroy(game_t *);

// display_game.c
void game_display(game_t *);

#endif /* GAME_H_ */

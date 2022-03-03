/*
** EPITECH PROJECT, 2021
** Matchstick
** File description:
** matchstick header
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

#include <stdlib.h>
#include <stddef.h>
#include <time.h>
#include "game.h"

int launch_matchstick(int, char **);

int play_matchstick(game_t *);

int turn_user(game_t *);

int turn_ia(game_t *);

#endif /* MATCHSTICK_H_ */

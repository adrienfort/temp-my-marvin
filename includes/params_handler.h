/*
** EPITECH PROJECT, 2021
** Params Handler
** File description:
** params_handler header
*/

#ifndef PARAMS_HANDLER_H_
#define PARAMS_HANDLER_H_

#include "game.h"

int valid_params(int, char **);

int valid_user_input(char *);

int valide_user_line(game_t *, int);

int valid_user_nb_matches(game_t *, int, int);

#endif /* PARAMS_HANDLER_H_ */

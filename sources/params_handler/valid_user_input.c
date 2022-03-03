/*
** EPITECH PROJECT, 2021
** Params Handler
** File description:
** valid user's input
*/

#include "lib.h"
#include "macros.h"

int valid_user_input(char *str)
{
    if (str == NULL)
        return MEMORY_FAILURE;
    if (my_strcmp(str, "EOF") == 0) {
        free(str);
        return END_OF_FILE;
    }
    if (str_contains_only_digits(str) != 0) {
        write_msg("Error: invalid input (positive number expected)\n");
        free(str);
        return NO;
    }
    return YES;
}

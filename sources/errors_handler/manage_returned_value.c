/*
** EPITECH PROJECT, 2021
** Errors Handler
** File description:
** write message corresponding to a retruned value
*/

#include "macros.h"
#include "lib.h"

int manage_returned_value(int value)
{
    if (value == SUCCESS || value == IA_WIN || value == USER_WIN) {
        if (value == IA_WIN)
            write_msg("You lost, too bad...\n");
        if (value == USER_WIN)
            write_msg("I lost... snif... but I'll get you next time!!\n");
        return value;
    }
    if (value == END_OF_FILE)
        return 0;
    if (value == MEMORY_FAILURE)
        write_error("Facing memory failure... please try later.\n");
    if (value == INVALID_PARAMS)
        write_error("Invalid parameters. Use -h for help.\n");
    return FAILURE;
}

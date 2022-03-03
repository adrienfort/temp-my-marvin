/*
** EPITECH PROJECT, 2021
** Librairy
** File description:
** display the help
*/

#include "lib.h"

void display_help(void)
{
    write_msg("Play matchstick game against an IA.\n\n");
    write_msg("USAGE\n");
    write_msg("  ./matchstick nb_lines max_matches\n\n");
    write_msg("DESCRIPTION\n");
    write_msg("  nb_lines\t\tnumber of lines (1 < n < 100).\n");
    write_msg("  max_matches\t\tnumber of maximum matches ");
    write_msg("a player can remove (0 < n).\n");
    write_msg("OPTIONS\n");
    write_msg("  -h\t\t\tprint the usage and quit.\n\n");
    write_msg("USER INTERACTIONS\n");
    write_msg("  keyboard\t\tfollow instructions and ");
    write_msg("type down your response\n");
}

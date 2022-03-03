/*
** EPITECH PROJECT, 2021
** Librairy
** File description:
** returns 0 if two char arr equals
*/

#include "lib.h"

int my_strcmp(const char *s1, const char *s2)
{
    int index = 0;

    while (s1[index] != '\0' && s2[index] != '\0') {
        if (s1[index] > s2[index]) {
            return (1);
        } else if (s1[index] < s2[index]) {
            return (-1);
        }
        index += 1;
    }
    if (s1[index] == '\0' && s2[index] == '\0') {
        return (0);
    } else if (s1[index] == '\0') {
        return (-1);
    }
    return (1);
}

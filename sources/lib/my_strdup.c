/*
** EPITECH PROJECT, 2021
** Librairy
** File description:
** allocate memory for a char array
*/

#include "lib.h"

char *my_strdup(char const *src)
{
    char *str;
    int len_src = my_strlen(src);
    int i = 0;

    str = malloc(sizeof(char) * (len_src + 1));
    if (str == NULL)
        return NULL;
    while (i < len_src) {
        str[i] = src[i];
        i += 1;
    }
    str[i] = '\0';
    return (&str[0]);
}

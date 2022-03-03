/*
** EPITECH PROJECT, 2021
** Librairy
** File description:
** returns what the user wrote
*/

#include "lib.h"

char *get_user_input(void)
{
    size_t buff_size = 64;
    char *str = malloc(sizeof(char) * buff_size);

    if (str == NULL)
        return NULL;
    if (getline(&str, &buff_size, stdin) == -1) {
        free(str);
        return my_strdup("EOF");
    }
    str[my_strlen(str) - 1] = '\0';
    return str;
}

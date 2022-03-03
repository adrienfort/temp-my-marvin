/*
** EPITECH PROJECT, 2021
** Librairy
** File description:
** returns int from string
*/

int my_atoi(const char *str)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; ++i)
        nb = nb * 10 + str[i] - '0';
    return nb;
}

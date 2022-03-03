/*
** EPITECH PROJECT, 2021
** Librairy
** File description:
** returns lenght of char array
*/

int my_strlen(const char *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i += 1)
        len += 1;
    return len;
}

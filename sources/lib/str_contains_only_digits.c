/*
** EPITECH PROJECT, 2021
** Librairy
** File description:
** returns 0 if str contains only digits
*/

static int is_char_digit(char c)
{
    if (c <= '9' && c >= '0')
        return 0;
    return -1;
}

int str_contains_only_digits(const char *str)
{
    for (int i = 0; str[i] != '\0'; ++i) {
        if (is_char_digit(str[i]) == -1)
            return -1;
    }
    return 0;
}

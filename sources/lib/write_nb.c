/*
** EPITECH PROJECT, 2021
** Librairy
** File description:
** write a number
*/

#include "lib.h"

int write_nb(int nb, int std)
{
    char c = 0;

    if (nb < 0) {
        c = '-';
        putchar_fd(std, c);
        write_nb(-nb, std);
    } else if (nb < 10) {
        c = nb + 48;
        putchar_fd(std, c);
    } else {
        c = (nb % 10) + 48;
        write_nb(nb / 10, std);
        putchar_fd(std, c);
    }
    return 0;
}

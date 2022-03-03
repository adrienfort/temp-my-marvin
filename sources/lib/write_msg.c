/*
** EPITECH PROJECT, 2021
** Librairy
** File description:
** write a msg on stdout or sdterr
*/

#include "lib.h"

ssize_t putchar_fd(int fd, char c)
{
    return write(fd, &c, 1);
}

ssize_t write_msg_fd(int fd, const char *msg)
{
    return write(fd, msg, my_strlen(msg));
}

ssize_t write_error(const char *msg)
{
    return write_msg_fd(2, msg);
}

ssize_t write_msg(const char *msg)
{
    return write_msg_fd(1, msg);
}

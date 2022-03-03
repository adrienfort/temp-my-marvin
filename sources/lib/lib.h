/*
** EPITECH PROJECT, 2021
** Librairy
** File description:
** librairy header
*/

#ifndef LIB_H_
#define LIB_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// my_strcmp.c
int my_strcmp(const char *, const char *);

// write_msg.c
ssize_t putchar_fd(int, char);
ssize_t write_msg_fd(int, const char *);
ssize_t write_error(const char *);
ssize_t write_msg(const char *);

// display_help.c
void display_help(void);

// my_strlen.c
int my_strlen(const char *);

// my_atoi.c
int my_atoi(const char *);

// str_contains_only_digits.c
int str_contains_only_digits(const char *);

// write_str_nb_times.c
void write_str_nb_times(const char *, int);

// my_strdup.c
char *my_strdup(char const *);

// write_nb.c
int write_nb(int, int);

// get_user_input.c
char *get_user_input(void);

#endif /* LIB_H_ */

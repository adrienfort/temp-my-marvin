##
## EPITECH PROJECT, 2021
## Librairy
## File description:
## librairy Makefile
##

SRC			=	display_help.c 					\
				get_user_input.c 				\
				my_atoi.c 						\
				my_strcmp.c 					\
				my_strdup.c 					\
				my_strlen.c 					\
				str_contains_only_digits.c 		\
				write_msg.c 					\
				write_nb.c 						\
				write_str_nb_times.c

OBJ 		=	$(SRC:.c=.o)

CFLAGS		=	-Wextra -Wall -Werror

NAME		=	libmy.a

all:			$(NAME)

$(NAME):		$(OBJ)
				ar rc $(NAME) $(OBJ)

clean:
				rm -f $(OBJ)
				rm -f *~

fclean:			clean
				rm -f $(NAME)

re:				fclean all

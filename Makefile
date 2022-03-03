##
## EPITECH PROJECT, 2021
## makefile
## File description:
## build project
##

CRUD_SRC	=	sources/crud/game_crud.c 					\
					sources/crud/game_display.c

ERRORS_SRC 		=	sources/errors_handler/manage_returned_value.c

MATCHSTICK_SRC 	=	sources/matchstick/launch_matchstick.c 			\
					sources/matchstick/play_matchstick.c 			\
					sources/matchstick/turn_ia.c 					\
					sources/matchstick/turn_user.c

PARAMS_SRC		=	sources/params_handler/valid_params.c 			\
					sources/params_handler/valid_user_input.c 		\
					sources/params_handler/valid_user_line.c 		\
					sources/params_handler/valid_user_nb_matches.c

ALL_SRC			=	$(CRUD_SRC)						\
					$(ERRORS_SRC)					\
					$(MATCHSTICK_SRC)				\
					$(PARAMS_SRC)					\
					main.c

OBJ				=	$(ALL_SRC:.c=.o)

CPPFLAGS		=	-I includes

LDFLAGS			=	-L./sources/lib/ -lmy

CFLAGS			=	-Wall -Wextra

NAME			=	matchstick

all:				$(NAME)

$(NAME):			$(OBJ)
					make -C sources/lib/
					gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(CFLAGS)

clean:
					rm -f $(OBJ)
					make clean -C sources/lib/
					rm -f *~
					rm -f includes/*~
					rm -f sources/*~
					rm -f sources/crud/*~
					rm -f sources/errors_handler/*~
					rm -f sources/matchstick/*~
					rm -f sources/params_handler/*~

fclean:				clean
					make fclean -C sources/lib/
					rm -f $(NAME)

re:					fclean all

##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Abel
##

SRC	=	src/backflip.c	\
		src/def_rect.c	\
		src/destroy.c	\
		src/env.c	\
		src/event.c	\
		src/get_nbr.c	\
		src/initialize.c\
		src/is_shoot.c	\
		src/main.c	\
		src/my_factor.c	\
		src/my_put_nbr.c\
		src/my_putstr.c	\
		src/my_strlen.c	\
		src/play_game.c	\
		src/printhelp.c	\
		src/put_highscore.c	\
		src/set_text.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -g -o $(NAME) $(OBJ) -l c_graph_prog

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

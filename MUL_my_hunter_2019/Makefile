##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Thomas Olry's Makefile made the 11/12/2019
##

CC	=	gcc -o

SRC	=	srcs/all_game.c			\
		srcs/basic.c			\
		srcs/click.c			\
		srcs/crosshair.c		\
		srcs/drawing.c			\
		srcs/event.c			\
		srcs/game.c			\
		srcs/hunter.c			\
		srcs/init_button.c		\
		srcs/pause_button.c		\
		srcs/print_help.c		\
		srcs/set.c			\
		srcs/set_sprite.c		\
		srcs/sprite_handling.c		\
		srcs/text.c			\
		srcs/destroy.c			\
		srcs/my_itoa.c			\
		srcs/event_pause.c		\

GAMEOBJ	=	crosshair.png	\
		music_game.ogg	\
		music_pause.ogg	\
		piaf.png	\
		background.jpg	\
		music.ogg	\
		Playtimes.ttf	\
		shot.ogg	\

GAMEOBJDEL	=	gameobject/crosshair.png	\
			gameobject/music_game.ogg	\
			gameobject/music_pause.ogg	\
			gameobject/piaf.png		\
			gameobject/background.jpg	\
			gameobject/music.ogg		\
			gameobject/Playtimes.ttf	\
			gameobject/shot.ogg		\

OBJ		=	$(SRC:.c=.o)

CPPFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -Wall -Werror -Wextra

CFLAGS		=	-I./include/

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	unzip gameobject/gameobject.zip
	mv $(GAMEOBJ) gameobject/
	$(CC) $(NAME) $(OBJ) $(CPPFLAGS) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)
	rm -rf $(GAMEOBJDEL)

re:	fclean all

.PHONY:	all clean fclean re

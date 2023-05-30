##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

CC = gcc

CLIB = -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio -lm

NAME =	my_hunter

SRC =	src/myhunter.c \
		src/starting_screen.c \
		src/starting_screen_element.c \
		src/starting_screen_animation.c \
		src/game.c \
		src/game_element.c \
		src/game_element_2.c \
		src/game_animation.c \
		src/game_animation_2.c \
		src/game_animation_3.c \
		src/game_movement.c \
		src/game_movement_2.c \
		src/game_action.c \
		src/game_spawn.c \
		src/game_spawn_2.c \
		src/credit.c \
		src/credit_element.c \
		src/credit_movement.c \
		src/credit_animation.c \
		src/sprite_1.c \
		src/sprite_2.c \
		src/sprite_3.c \
		src/sprite_4.c \
		src/sprite_5.c \
		src/sprite_6.c \
		src/sound_1.c \
		src/time.c \
		src/timer.c \
		src/text.c \
		src/destroy.c \
		src/print_error.c

OBJ =	$(SRC:.c=.o)

all:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CLIB)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

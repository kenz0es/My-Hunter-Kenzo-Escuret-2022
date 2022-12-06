##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

CC= gcc

CLIB= -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio -lm

NAME =	my_hunter

SRC =	myhunter.c \
		starting_screen.c \
		starting_screen_element.c \
		starting_screen_animation.c \
		game.c \
		game_element.c \
		game_element_2.c \
		game_animation.c \
		game_animation_2.c \
		game_animation_3.c \
		game_movement.c \
		game_movement_2.c \
		game_action.c \
		game_spawn.c \
		game_spawn_2.c \
		credit.c \
		credit_element.c \
		credit_movement.c \
		credit_animation.c \
		sprite_1.c \
		sprite_2.c \
		sprite_3.c \
		sprite_4.c \
		sprite_5.c \
		sprite_6.c \
		sound_1.c \
		time.c \
		timer.c \
		text.c \
		destroy.c \
		print_error.c

OBJ =	$(SRC:.c=.o)

all:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CLIB)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

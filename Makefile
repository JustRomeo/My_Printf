##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Le Makefile de la lib
##

SRC =	my_getnbr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strcat.c	\
		my_strlen.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_putint_in_str.c	\
		my_printf.c	\
		my_getlong.c	\
		my_put_long.c	\
		my_getdouble.c	\
		my_put_double.c	\
		my_hexa.c	\
		my_binary.c	\
		my_strlowercase.c	\
		my_putpointer.c	\
		my_octal.c	\
		my_putspecstr.c	\
		tests/test.c	\

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a

CRIT = -lcriterion

WALL = -Wall -Wextra -Werror

CRITERION = unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all

tests_run:  $(OBJ)
			gcc -o $(CRITERION) $(OBJ) $(CRIT)
			rm -f $(OBJ)
			./$(CRITERION)

##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Le Makefile de la lib
##

TSTF = tests/
SRCF = src/

SRC =	$(SRCF)my_getnbr.c			\
		$(SRCF)my_putchar.c			\
		$(SRCF)my_put_nbr.c			\
		$(SRCF)my_putstr.c			\
		$(SRCF)my_revstr.c			\
		$(SRCF)my_strcat.c			\
		$(SRCF)my_strlen.c			\
		$(SRCF)my_strncat.c			\
		$(SRCF)my_strncmp.c			\
		$(SRCF)my_strncpy.c			\
		$(SRCF)my_putint_in_str.c	\
		$(SRCF)my_printf.c			\
		$(SRCF)my_getlong.c			\
		$(SRCF)my_put_long.c		\
		$(SRCF)my_getdouble.c		\
		$(SRCF)my_put_double.c		\
		$(SRCF)my_hexa.c			\
		$(SRCF)my_binary.c			\
		$(SRCF)my_strlowercase.c	\
		$(SRCF)my_putpointer.c		\
		$(SRCF)my_octal.c			\
		$(SRCF)my_putspecstr.c		\
		$(TSTF)test.c				\

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

##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile lib
##

NAME	:=	libmy.a

SRC	:=	my_find_prime_sup.c	\
		my_getnbr.c	\
		my_isneg.c	\
		my_is_prime.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_showmem.c	\
		my_showstr.c	\
		my_sort_int_array.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_strupcase.c	\
		my_swap.c	\
		my_puterr.c	\
		my_puterr_str.c	\
		my_puterr_nbr.c	\
		my_putstrerr.c	\

_SRC	:=	$(SRC:%=src/%)

OBJ	:=	$(_SRC:.c=.o)

INCLUDE	:=	-I ../../include/

CFLAGS	:=	-g $(INCLUDE)

all:	$(NAME)

$(NAME):	$(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

clean:
	@rm -f $(OBJ)
	@rm -f \#*\#
	@rm -f *~

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY:	clean fclean re all
.SILENT: $(OBJ)

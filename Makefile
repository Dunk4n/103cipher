##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile pong
##

SRC	:=	main.c		\
		inverted.c	\
		parsing.c	\
		valid.c		\
		cipher.c

OBJ	:=	$(SRC:%.c=src/%.o)

NAME	:=	103cipher

LIB	:=	-L ./lib/my/ -lmy

INCLUDE	:=	-I include/

CFLAGS	:=	-g $(INCLUDE)

all:	$(NAME)

lib:
	@make --no-print-directory -C lib/my/

$(NAME):	lib $(OBJ)
		@gcc -o $(NAME) $(OBJ) $(LIB) -lm

clean:
	@make --no-print-directory -C ./lib/my/ clean
	@rm -f $(OBJ)
	@rm -f \#*\#
	@rm -f *~

fclean:	clean
	@make --no-print-directory -C lib/my/ fclean
	@rm -f $(NAME)

re:	fclean all
	clear

.PHONY:	clean fclean re lib all
.SILENT:	$(OBJ)

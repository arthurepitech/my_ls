##
## EPITECH PROJECT, 2022
## C Pool
## File description:
## Makefile
##

NAME	=	libmy.a

SRC		:=	$(shell find . -name "*.c")

OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@@ar rc $(NAME) $(OBJ)
	@@cp $(NAME) ../

%.o: %.c
	@@gcc -g3 -W -Wall -Wextra -o $@ -c $<

clean:
	@@$(shell find . -name "*.o" -delete)
	@@$(shell find . -name "*~" -delete)
	@@$(shell find . -name "\#*\#" -delete)
	@@$(shell find . -name "vgcore.*" -delete)

fclean: clean
	@@rm -f $(NAME)
	@@rm -f ../$(NAME)

re: fclean all clean

.PHONY: all clean fclean re

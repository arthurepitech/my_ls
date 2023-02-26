##
## EPITECH PROJECT, 2022
## C Pool
## File description:
## Makefile
##

NAME	=	my_ls

SRC		+=	src/main.c				\
			src/print_help.c 		\
			src/get_info.c 			\
			src/check_if_exist.c	\
			src/my_get_chmod.c 		\
			src/my_ls_basic.c 		\
			src/my_ls_a.c 			\
			src/my_ls_d.c 			\
			src/my_ls_r.c 			\
			src/my_ls_l.c 			\
			src/my_ls_m.c 			\
			src/get_total.c			\
			src/get_date.c			\
			src/my_strcat_path.c	\
			src/print_ls.c			\


OBJ		+=	$(SRC:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJ)
	@@$(MAKE) -C ./lib/my/
	cc -o $(NAME) $(OBJ) -I./include -lmy -L./lib

%.o: %.c
	@@cc -g3 -W -Wall -Wextra -o $@ -c $<

unit_tests: fclean all
	cc tests/*.c -o unit_tests -I./include -L./ -lmy --coverage -lcriterion

run_tests: unit_tests
	./unit_tests

clean:
	@@$(shell find . -name "*.o" -delete)
	@@$(shell find . -name "*~" -delete)
	@@$(shell find . -name "\#*\#" -delete)
	@@$(shell find . -name "vgcore.*" -delete)
	@@$(shell find . -name "*.gc*" -delete)
	@@$(shell find . -name "unit_tests" -delete)
	@@$(MAKE) clean -C lib/my/

fclean: clean
	@@rm -f $(NAME)
	$(MAKE) fclean -C lib/my/

re: fclean all clean
	$(MAKE) re -C lib/my/

.PHONY: all clean fclean re

##
## Makefile for VectorLib in /here
##
## Made by MASSARD Theo
## Login   <massar_t@etna-alternance.net>
##
## Started on  Wed Apr  6 14:15:30 2016 MASSARD Theo
## Last update Wed Apr 27 04:43:11 2016 GUEYE Osir
##

CFLAGS 		?= -W -Wall -Werror -fPIC
CC		= gcc
RM		= rm -f
STAT		= libvector.a
DYNA		= libvector.so
NAME		= vector
SRC		= 	add_node.c 	\
			add_value.c 	\
			concat.c 	\
			count.c 	\
			free.c 		\
			in_list.c 	\
			my_putchar.c	\
			my_strcat.c	\
			my_strcmp.c	\
			my_strcpy.c	\
			my_strlen.c	\
			nelement.c	\
			new_vector.c	\
			print.c
OBJ		= $(SRC:%.c=%.o)

all: vector_static vector_dynamic ## Default rule to create the program

clean: ## Removes objects files
	$(RM) $(OBJ)

fclean: clean ## Removes objects files and executable file
	$(RM) $(NAME) $(STAT) $(DYNA)

re: fclean all ## Rebuild Project

vector_static: $(OBJ) ## Creates static library (.a)
	ar rcs $(STAT) $^

vector_dynamic: $(OBJ) ## Creates dynamic library (.so)
	$(CC) -shared -o $(DYNA) $^

help: ## Lists Makefile Commands
	@cat $(MAKEFILE_LIST) | grep -e "^[a-zA-Z_\-]*: *.*## *" | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

.PHONY: all help re vector_static vector_dynamic clean fclean

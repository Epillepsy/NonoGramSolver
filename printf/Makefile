##
## Makefile for my_printf in /home/bob/Documents/printf
##
## Made by MASSARD Theo
## Login   <massar_t@etna-alternance.net>
##
## Started on  Wed Apr  6 14:15:30 2016 MASSARD Theo
## Last update Wed Apr 27 04:46:23 2016 GUEYE Osir
##

CFLAGS		?=	-W -Wall -Werror -ansi -fPIC
CC		=	gcc
RM		=	rm -f
STAT		=	libmy_printf_`uname -m`-`uname -s`.a
DYNA		=	libmy_printf_`uname -m`-`uname -s`.so
NAME		=	my_printf
SRC		=	my_printf.c	\
			affstdout.c	\
			utils.c		\
			flags.c		\
			data.c		\
			simple_print.c	\
			next_print.c
OBJ		= 	$(SRC:%.c=%.o)

all: my_printf_static my_printf_dynamic ## Default rule to create the program

clean: ## Removes objects files
	$(RM) $(OBJ)

fclean: clean ## Removes objects files and executable file
	$(RM) $(NAME) $(STAT) $(DYNA)

re: fclean all ## Rebuild Project

my_printf_static: $(OBJ) ## Creates static library (.a)
	ar rcs $(STAT) $^

my_printf_dynamic: $(OBJ) ## Creates dynamic library (.so)
	$(CC) -shared -o $(DYNA) $^

help: ## Lists Makefile Commands
	@cat $(MAKEFILE_LIST) | grep -e "^[a-zA-Z_\-]*: *.*## *" | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

.PHONY: all help re my_printf_static my_printf_dynamic clean fclean

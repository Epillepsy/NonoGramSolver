##
## Makefile for projet_easter in /var/Projet_Easter/NPROJECT
## 
## Made by GUEYE Osir
## Login   <gueye_o@etna-alternance.net>
## 
## Started on  Wed Apr 27 00:16:10 2016 GUEYE Osir
## Last update Wed Apr 27 05:36:34 2016 GUEYE Osir
##

CC		= 	gcc
CFLAGS 		?= 	-W -Wall -Werror -Wextra -o -I -fPIC
RM 		= 	rm -f
PR 		= 	printf
PR_NAME 	= 	libmy_$(PR)_`uname -m`-`uname -s`
PR_STAT		= 	$(PR_NAME).a
PR_DYNA		= 	$(PR_NAME).so
PR_TMP 		= 	$(PR_NAME).o
PR_DIR 		= 	./printf/
PR_SRC		= 	$(PR_DIR)my_printf.c 	\
			$(PR_DIR)affstdout.c 	\
			$(PR_DIR)utils.c 	\
			$(PR_DIR)flags.c 	\
			$(PR_DIR)data.c 	\
			$(PR_DIR)simple_print.c \
			$(PR_DIR)next_print.c
PR_OBJ 		= 	$(PR_SRC:%.c=%.o)
VC 		= 	vector
VC_NAME 	= 	libmy_$(VC)_`uname -m`-`uname -s`
VC_STAT 	= 	$(VC_NAME).a
VC_DYNA 	= 	$(VC_NAME).so
VC_TMP 		= 	$(VC_NAME).o
VC_DIR 		= 	./libvector/
VC_SRC		= 	$(VC_DIR)add_node.c 	\
			$(VC_DIR)add_value.c 	\
			$(VC_DIR)concat.c 	\
			$(VC_DIR)count.c 	\
			$(VC_DIR)free.c 	\
			$(VC_DIR)in_list.c 	\
			$(VC_DIR)my_putchar.c	\
			$(VC_DIR)my_strcat.c	\
			$(VC_DIR)my_strcmp.c	\
			$(VC_DIR)my_strcpy.c	\
			$(VC_DIR)my_strlen.c	\
			$(VC_DIR)nelement.c	\
			$(VC_DIR)new_vector.c	\
			$(VC_DIR)print.c
VC_OBJ 		= 	$(VC_SRC:%.c=%.o)
LM 		= 	libmy
LM_NAME 	= 	libmy_$(LM)_`uname -m`-`uname -s`
LM_STAT 	= 	$(LM_NAME).a
LM_DYNA 	= 	$(LM_NAME).so
LM_TMP 		=	$(LM_NAME).o
LM_DIR 		= 	./libmy/
LM_SRC		=	$(LM_DIR)concat.c	\
			$(LM_DIR)file_exist.c	\
			$(LM_DIR)isdigit.c	\
			$(LM_DIR)my_getnbr.c	\
			$(LM_DIR)my_strcat.c	\
			$(LM_DIR)my_strcmp.c	\
			$(LM_DIR)my_strcpy.c	\
			$(LM_DIR)my_strdup.c 	\
			$(LM_DIR)my_aff_grid.c 	\
			$(LM_DIR)my_strlen.c
LM_OBJ 		=	$(LM_SRC:%.c=%.o)
SRC 		= 	aff_grid.c		\
			checking_line.c		\
			fill_grid.c 		\
			Get_infos.c 		\
			init_grid.c 		\
			is_line_complete.c 	\
			basic_utility.c 	\
			move_block.c 		\
			check_args.c		\
			check_column.c 		\
			main.c
OBJ 		= 	$(SRC:%.c=%.o)
NAME 		= 	Prep\'X

all: lib_vector_static lib_my_printf_static lib_libmy_static $(OBJ) ## Default rules, creates the project
	$(CC) $(CFLAGS) -I./ $(OBJ) *.a -o $(NAME)

project_only: $(OBJ) ## Simply builds the project (DOESN'T BUILD LIBRARIES)
	$(CC) $(CFLAGS) $^ $(PR_STAT) $(VC_STAT) $(LM_STAT) -o $(NAME)

lib_vector_static: $(VC_OBJ) ## Creates vector static library (.a)
	ar rcs $(VC_STAT) $^

lib_vector_dynamic: ## Creates vector dynamic library (.so)
	$(CC) $(CFLAGS) -fPIC -shared $(VC_SRC) -o $(VC_TMP)
	$(CC) -shared $(VC_TMP) -o $(VC_DYNA)

lib_vector_all: lib_vector_dynamic lib_vector_static ## Creates boths library types for lib_vector

lib_libmy_static: $(LM_OBJ) ## Creates libmy static library (.a)
	ar rcs $(LM_STAT) $^

lib_libmy_dynamic: ## Creates libmy dynamic library (.so)
	$(CC) $(CFLAGS) -fPIC -shared $(LM_SRC) -o $(LM_TMP)
	$(CC) -shared $(LM_TMP) -o $(LM_DYNA)

lib_libmy_all: lib_libmy_dynamic lib_libmy_static ## Creates boths library types for lib_libmy

lib_my_printf_static: $(PR_OBJ) ## Creates my_printf static library (.a)
	ar rcs $(PR_STAT) $^

lib_my_printf_dynamic: ## Creates my_printf dynamic library (.so)
	$(CC) $(CFLAGS) -fPIC -shared  $(PR_SRC) -o $(PR_TMP)
	$(CC) -shared $(PR_TMP) -o $(PR_DYNA)

lib_my_printf_all: lib_my_printf_dynamic lib_my_printf_static ## Creates boths library types for libmy_printf

lib_all: lib_vector_all lib_my_printf_all lib_libmy_all ## Creates both libraries in dynamic and static format

clean_obj: ## Removes objects files
	$(RM) $(PR_OBJ) $(PR_TMP) $(VC_OBJ) $(VC_TMP) $(LM_OBJ) $(LM_TMP)

cleanlib_vector: ## Cleans vector libraries' dependencies, and libraries's objects (.a, .so, .o)
	$(RM) $(VC_DYNA) $(VC_STAT) $(VC_TMP)

cleanlib_my_printf: ## Cleans printf libraries' dependencies, and libraries's objects (.a, .so, .o)
	$(RM) $(PR_DYNA) $(PR_STAT) $(PR_TMP)

cleanlib_libmy:  ## Cleans libmy libraries' dependencies, and libraries's objects (.a, .so, .o)
	$(RM) $(LM_DYNA) $(LM_STAT) $(LM_TMP)

cleanlib_all: cleanlib_my_printf cleanlib_vector cleanlib_libmy clean_obj ## Cleans every object related to vector and printf lib

lib_my_printf_re: cleanlib_my_printf lib_my_printf_all ## Rebuilds my_printf libraries

lib_vector_re: cleanlib_vector lib_vector_all ## Rebuilds vector libraries

lib_libmy_re: cleanlib_libmy lib_libmy_all ## Rebuilds libmy libraries

clean: cleanlib_all ## Applies cleanlib_all rule, and removes project's objects
	$(RM) $(OBJ)

fclean: clean ## Cleans every object
	$(RM) $(NAME)

re: clean all ## Rebuilds full project

help: ## Lists Makefile Commands
	@cat $(MAKEFILE_LIST) | grep -e "^[a-zA-Z_\-]*: *.*## *" | sort | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

.DEFAULT: all

.PHONY: all clean re fclean project_only lib_vector_static lib_vector_dynamic lib_vector_all lib_libmy_static lib_libmy_dynamic lib_libmy_all lib_printf_static lib_printf_dynamic lib_printf_all lib_all clean_obj cleanlib_vector cleanlib_print cleanlib_libmy cleanlib_all lib_libmy_re lib_vector_re lib_print_re help

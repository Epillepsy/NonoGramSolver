##
## Makefile for projet_easter in /var/Projet_Easter/NPROJECT/libmy
## 
## Made by GUEYE Osir
## Login   <gueye_o@etna-alternance.net>
## 
## Started on  Tue Apr 26 14:05:05 2016 GUEYE Osir
## Last update Tue Apr 26 14:59:40 2016 GUEYE Osir
##

CC	=	gcc
LM_SRC	=	concat.c	\
		file_exist.c	\
		isdigit.c	\
		my_getnbr.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strdup.c 	\
		my_strlen.c
LM_OBJ	= 	$(LM_SRC:%.c=%.o)
LM_NAME	=	libmy.a

all:	$(LM_OBJ)
	$(CC) -c $(LM_SRC)
	ar r libmy.a $^
	ranlib libmy.a
clean:
	rm -f $(LM_OBJ)

fclean: clean
	rm -f $(LM_NAME)

re: fclean all

.PHONY: all clean fclean re

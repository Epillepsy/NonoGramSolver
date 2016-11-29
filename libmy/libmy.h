/*
** libmy.h for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 06:11:45 2016 GUEYE Osir
** Last update Wed Apr 27 06:11:52 2016 GUEYE Osir
*/

#ifndef __LIBMY_H__
# define __LIBMY_H__

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	exists(char *);

int	my_getnbr(char *);

int	my_strcmp(char *, char *);

char	*my_strcpy(char *, char *);

int	my_isdigit(char *);

char	*my_strdup(char *);

char	*concat(char *, char *);

int      my_strlen(char *);

char	*my_strcat(char *, char *);

void 	my_aff_grid(char **);

void 	my_putchar(char);
#endif

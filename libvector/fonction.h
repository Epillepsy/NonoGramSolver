/*
** fonction.h for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 06:10:38 2016 GUEYE Osir
** Last update Wed Apr 27 06:10:39 2016 GUEYE Osir
*/

#ifndef __LIBVECTOR_H__
# define __LIBVECTOR_H__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "define.h"

typedef struct	s_vector
{
  void	*data;
  int	index;
  int	*tips;
  int	tips_len;
  struct s_vector	*next;
  struct s_vector	*(*push)(struct s_vector *, struct s_vector*);
  struct s_vector	*(*nelement)(struct s_vector *, int);
  struct s_vector	*(*addValue)(struct s_vector *self, void * data);
  int	(*count)(struct s_vector *);
  int	(*inListI)(struct s_vector *, void *);
  int	(*inListS)(struct s_vector *, void *);
  void	(*free_vector)(struct s_vector *);
  void	(*print)(struct s_vector *self, void *type, char* separator); 
}	t_vector;

t_vector	*push(t_vector *, t_vector *);

t_vector	*nelement(t_vector *, int );

t_vector	*addValue(t_vector *, void *);

t_vector	*NewVector(void *);

int	count(t_vector *);

char	*concat(char *, char *);

void	free_vector(t_vector *);

void	print(t_vector *, void *, char *);

char	*my_strcat(char *, char *);

void	my_putchar(char);

char	*my_strcpy(char *, char *);

int	my_strlen(char *);

int	inListS(t_vector *, void *);

int	inListI(t_vector *, void *);

int	my_strcmp(char *, char *);

#endif

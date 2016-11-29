/*
** libvector.h for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 06:10:48 2016 GUEYE Osir
** Last update Wed Apr 27 06:10:50 2016 GUEYE Osir
*/

#ifndef __LIB_H__
# define __LIB_H__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "define.h"
#include "../printf/libprintf.h"

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

t_vector	*push(t_vector *self, t_vector *);

t_vector	*nelement(t_vector *, int );

t_vector	*addValue(t_vector *self, void * data);

t_vector	*NewVector(void * data);

int	count(t_vector *self);

char	*concat(char *s1, char *s2);

void	free_vector(t_vector *vector);

void	print(t_vector *self, void *type, char* separator);

char	*my_strcat(char *str1, char *str2);

void	my_putchar(char c);

char	*my_strcpy(char *dest, char *src);

int	my_strlen(char *str);

int	inListS(t_vector *, void *);

int	inListI(t_vector *self, void * data);

int	my_strcmp(char *s1, char *s2);

#endif

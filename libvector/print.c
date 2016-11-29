/*
** print.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:09:13 2016 GUEYE Osir
** Last update Wed Apr 27 04:45:11 2016 GUEYE Osir
*/

#include "define.h"
#include "libvector.h"

void	print(t_vector *self, void *type, char *separator)
{
  char	*expression;

  while (self->next != NULL)
    {
      expression = concat("%", type);
      printf(concat(expression, separator) ,self->data);
      self = self->next;
    }
}

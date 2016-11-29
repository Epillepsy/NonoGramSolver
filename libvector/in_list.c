/*
** in_list.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:07:42 2016 GUEYE Osir
** Last update Wed Apr 27 04:40:05 2016 GUEYE Osir
*/

#include "libvector.h"

int	inListS(t_vector *self, void * data)
{
  while (self->next != NULL)
    {
      if (my_strcmp(self->data, data) == 0)
	return (0);
      self = self->next;
    }
  return(-1);
}

int	inListI(t_vector *self, void * data)
{
  while (self->next != NULL)
    {
      if (self->data == data)
	return (0);
      self = self->next;
    }
  return(-1);
}

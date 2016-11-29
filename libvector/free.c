/*
** free.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:07:28 2016 GUEYE Osir
** Last update Wed Apr 27 04:39:46 2016 GUEYE Osir
*/

#include "define.h"
#include "libvector.h"

void	free_vector(t_vector *self)
{
  t_vector	*tmp;

  while (self != NULL)
    {
      tmp = self;
      self = self->next;
      free(tmp);
    }
}

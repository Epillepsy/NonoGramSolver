/*
** nelement.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:08:55 2016 GUEYE Osir
** Last update Wed Apr 27 04:44:38 2016 GUEYE Osir
*/

#include "define.h"
#include "libvector.h"

t_vector	*nelement(t_vector *self, int index)
{
  while (self->next != NULL)
    {
      if (self->index == index)
	return (self);
      self = self->next;
    }
  return (self);
}

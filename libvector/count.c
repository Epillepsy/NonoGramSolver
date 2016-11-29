/*
** count.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:07:01 2016 GUEYE Osir
** Last update Tue Apr 26 14:29:54 2016 GUEYE Osir
*/

#include "define.h"
#include "libvector.h"

int	count(t_vector *self)
{
  int	i;

  i = 0;
  while (self->next != NULL)
    {
      i++;
      self = self->next;
    }
  return (i);
}

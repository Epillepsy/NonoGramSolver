/*
** add_node.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:06:35 2016 GUEYE Osir
** Last update Tue Apr 26 14:28:49 2016 GUEYE Osir
*/

#include "libvector.h"

t_vector	*push(t_vector *self, t_vector *newNode)
{
  if (newNode != NULL)
    newNode->next = self;
  else
    my_printf("\nFunction add_node.c line 7, error status: try to push NULL Node\n");
  return (newNode);
}

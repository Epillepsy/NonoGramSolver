/*
** add_value.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:06:41 2016 GUEYE Osir
** Last update Tue Apr 26 14:29:17 2016 GUEYE Osir
*/

#include "define.h"
#include "libvector.h"

t_vector	*addValue(t_vector *self, void * data)
{
  t_vector	*node;

  node = malloc(sizeof(*node));
  if (node == NULL)
    {
      my_printf("\naddValue Function line 10. Error status: try to add NULL Node\n");
      return (NULL);
    }
  node->next = self;
  node->data = data;
  return (node);
}

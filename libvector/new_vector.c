/*
** new_vector.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:09:04 2016 GUEYE Osir
** Last update Wed Apr 27 04:44:52 2016 GUEYE Osir
*/

#include "libvector.h"
#include "define.h"

t_vector	*NewVector(void* data)
{
  t_vector	*newNode;

  if ((newNode = malloc(sizeof(*newNode))))
    {
      newNode->next = NULL;
      newNode->push = push;
      newNode->nelement = nelement;
      newNode->count = count;
      newNode->print = print;
      newNode->addValue = addValue;
      newNode->inListS = inListS;
      newNode->inListI = inListI;
      newNode->data = data;
      return (newNode);
    }
  return (NULL);
}

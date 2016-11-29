/*
** my_strlen.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:08:46 2016 GUEYE Osir
** Last update Wed Apr 27 04:44:26 2016 GUEYE Osir
*/

#include "libvector.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}

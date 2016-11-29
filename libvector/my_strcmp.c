/*
** my_strcmp.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:08:30 2016 GUEYE Osir
** Last update Wed Apr 27 04:43:48 2016 GUEYE Osir
*/

#include "libvector.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] < s2[i])
	return (-1);
      if (s1[i] > s2[i])
	return (1);
      i += 1;
    }
  if (s1[i] < s2[i])
    return (-1);
  if (s1[i]> s2[i])
    return (1);
  return (0);
}

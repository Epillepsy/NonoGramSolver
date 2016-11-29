/*
** concat.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:06:47 2016 GUEYE Osir
** Last update Wed Apr 27 04:38:23 2016 GUEYE Osir
*/

#include "libvector.h"

char	*concat(char *s1, char *s2)
{
  char	*res;

  res = malloc(my_strlen(s1) + my_strlen(s2) + 100 * sizeof(char));
  if (res != NULL)
    {
      my_strcpy(res, s1);
      my_strcat(res, s2);
    }
  return (res);
}

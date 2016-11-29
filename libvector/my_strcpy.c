/*
** my_strcpy.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:08:40 2016 GUEYE Osir
** Last update Wed Apr 27 04:44:02 2016 GUEYE Osir
*/

#include "libvector.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (*(src + i))
    {
      *(dest + i) = *(src + i);
      i++;
    }
  return (dest);
}

/*
** my_strcpy.c for projet_easter in /var/Projet_Easter/NPROJECT/libmy
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:05:39 2016 GUEYE Osir
** Last update Tue Apr 26 14:05:40 2016 GUEYE Osir
*/

#include "libmy.h"

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

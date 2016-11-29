/*
** my_strcat.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:08:20 2016 GUEYE Osir
** Last update Wed Apr 27 04:43:39 2016 GUEYE Osir
*/

#include "libvector.h"

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (*(str1 + i) != '\0')
    i++;
  while (*(str2 + j) != '\0')
    {
      *(str1 + i) = *(str2 + j);
      i++;
      j++;
    }
  return (str1);
}

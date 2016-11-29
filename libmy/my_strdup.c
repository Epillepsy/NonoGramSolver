/*
** my_strdup.c for projet_easter in /var/Projet_Easter/NPROJECT/libmy
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:05:47 2016 GUEYE Osir
** Last update Wed Apr 27 04:34:59 2016 GUEYE Osir
*/

#include "libmy.h"

char	*my_strdup(char *str)
{
  char	*tab;

  if (str != NULL)
    {
      if ((tab =  malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
	return (NULL);
      else
	return (my_strcpy(tab, str));
    }
  return (NULL);
}

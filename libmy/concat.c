/*
** concat.c for projet_easter in /var/Projet_Easter/NPROJECT/libmy
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:04:41 2016 GUEYE Osir
** Last update Wed Apr 27 05:44:12 2016 GUEYE Osir
*/

#include "libmy.h"

char	*concat(char *s1, char *s2)
{
  char	*res;

  res = malloc(my_strlen(s1) + my_strlen(s2) + 10 * sizeof(char));
  if (res != NULL)
    {
      my_strcpy(res, s1);
      my_strcat(res, s2);
    }
  return (res);
}

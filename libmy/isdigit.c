/*
** isdigit.c for projet_easter in /var/Projet_Easter/NPROJECT/libmy
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:04:56 2016 GUEYE Osir
** Last update Wed Apr 27 05:44:33 2016 GUEYE Osir
*/

#include "libmy.h"

int	my_isdigit(char *c)
{
  int	i;

  i = 0;
  while (c[i] != '\0')
    {
      if ((c[i] < '0') || (c[i]  > '9'))
	return (-1);
      i++;
    }
  return (0);
}

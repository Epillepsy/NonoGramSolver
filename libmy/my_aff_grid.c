/*
** my_aff_grid.c for projet_easter in /var/Projet_Easter/NPROJECT/libmy
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 00:27:55 2016 GUEYE Osir
** Last update Wed Apr 27 04:22:13 2016 GUEYE Osir
*/

#include "libmy.h"

void	my_aff_grid(char **tab)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i] != '\0')
    {
      while (tab[i][j] != '\0')
	{
	  my_putchar(tab[i][j]);
	  j++;
	}
      j = 0;
      my_putchar('\n');
      i++;
    }
}

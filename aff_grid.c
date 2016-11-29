/*
** aff_grid.c for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 00:08:27 2016 GUEYE Osir
** Last update Wed Apr 27 05:36:53 2016 GUEYE Osir
*/

#include "fonction.h"

void	my_aff_game_grid(char **tab)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i] != '\0')
    {
      while (tab[i][j] != '\0')
	{
	  if (tab[i][j] == 'X')
	    my_putchar(tab[i][j]);
	  else if (tab[i][j] == '?')
	    my_putchar('.');
	  else 
	    my_putchar(' ');
	  j++;
	}
      j = 0;
      my_putchar('\n');
      i++;
    }
}

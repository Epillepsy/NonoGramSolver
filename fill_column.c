/*
** fill_column.c for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 05:38:47 2016 GUEYE Osir
** Last update Wed Apr 27 05:38:49 2016 GUEYE Osir
*/

#include "fonction.h"

int	get_first_of_block(char **grille, int col, int number_in_col)
{
  int	i;
  int	cpt;

  i = 0;
  cpt = 0;
  while (grille[i] != '\0')
    {
      if (grille[i][col] == 'X')
	cpt++;
      if  (cpt == number_in_col)
	return (i);
      i++;
    }
}

/*
** check_column.c for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 00:08:12 2016 GUEYE Osir
** Last update Wed Apr 27 05:37:49 2016 GUEYE Osir
*/

#include "fonction.h"

int	grid_height(char **grille)
{
  int	i;

  i = 0;
  while (grille[i] != '\0')
    i++;
  return (i);
}

int	block_of_col(char **grille, int col, int beginning, int size)
{
  int	j;
  int	cpt;

  j = beginning;
  cpt = 0;
  while (j < grid_height(grille))
    {
      if (grille[j][col] == 'X')
	cpt++;
      j++;
    }
  if (cpt == size)
    return (0);
  return (1);
}

int	block_coll_to_fill(char **grille, int col, t_vector *clues)
{
  int	i;
  int	cpt;

  i = 0;
  cpt = 0;
  while (grille[i] != '\0')
    {
      if (grille[i][col] == 'X')
	cpt++;
      i++;
    }
  return (number_of_tips(clues) - cpt);
}

int	column_good(char **grille, t_vector *col)
{
  int	i;
  int	j;
  int	k;
  int	result;

  i = 0;
  j = 0;
  k = 0;
  result = 0;
  while (i < grid_height(grille) && k < col->tips_len)
    {
      if (grille[i][j] == 'X')
	result += block_of_col(grille, j, i, col->tips[k]);
      i = col->tips[k];
      k++;
    }
  i = 0;
  j++;
  return (result);
}

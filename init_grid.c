/*
** init_grid.c for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:04:12 2016 GUEYE Osir
** Last update Wed Apr 27 05:40:09 2016 GUEYE Osir
*/

#include "fonction.h"

char	**init_grid(char *size)
{
  int 	i;
  int 	height;
  int 	width;
  char 	*tmp;

  tmp = malloc(sizeof(char*));
  for (i = 0; i < my_strlen(size); i++)
    {
      if (size[i] == 'x')
	{
	  height = my_getnbr(tmp);
	  tmp = malloc(sizeof(char*));
	}
      else
	tmp = concat(tmp, &size[i]);
    }
  width = my_getnbr(tmp);
  return (fill_grid(height, width));
}

char	**fill_grid(int height, int width)
{
  char	**grid;
  int	i;
  int	j;

  grid = malloc(sizeof(char *) * (height + 1));
  for (i = 0; i < height; i++)
    {
      grid[i] = malloc(sizeof(char) * (width + 1));
      for (j = 0; j < width; j++)
	grid[i][j] = '?';
      grid[i][j] = '\0';
    }
  grid[i] = '\0';
  return (grid);
}

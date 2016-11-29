/*
** fill_grid.c for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:03:55 2016 GUEYE Osir
** Last update Wed Apr 27 06:09:44 2016 GUEYE Osir
*/

#include "fonction.h"

char	*fill_using_tips(char *line, t_vector *row)
{
  int	j;
  int	k;

  k = 0;
  for (j = 0; j < row->tips_len; j++)
    {
      line = fill_this_intervall(line, k, row->tips[j]);
      k += row->tips[j];
      line[k++] = 'O';
    }
  return (line);
}

char	*supperpo(char *line, char *sec_line)
{
  char	*tmp;
  int	i;

  tmp = line;
  i = 0;
  while (i < my_strlen(line))
    {
      if ((line[i] == 'X' && sec_line[i] == 'X'))
	tmp[i] = 'X';
      else
	tmp[i] = '?';
      i++;
    }
  return (tmp);
}

char	*fill_this_intervall(char *line, int beginning, int size)
{
  int	i;

  i = beginning;
  while (i < beginning + size)
    {
      line[i] = 'X';
      i++;
    }
  if (line[i] != '\0')
    line[i] = 'O';
  return (line);
}

char	*to_max_left(char *grid_line)
{
  int	k;
  int	i;
  char	*line;

  line = my_strdup(grid_line);
  i = 0;
  if (number_of_block(line) == 0)
    return (line);
  while (i < my_strlen(line) && line[my_strlen(line) - 1] != 'X')
    {
      for (k = my_strlen(line) - 1; k > 0; k--) 
	line = my_swap_char(line, k, k - 1);
      i++;
    }
  return (line);
}

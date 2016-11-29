/*
** is_line_complete.c for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 00:12:40 2016 GUEYE Osir
** Last update Wed Apr 27 05:40:36 2016 GUEYE Osir
*/

#include "fonction.h"

char	*fill_with_blank(char *line, t_vector *row)
{
  if (box_to_fill(line, row) == 0)
    {
      line = is_blank(line);
    }
  return (line);
}

char	*is_blank(char *line)
{
  int	i;

  i = 0;
  while (line[i] != '\0')
    {
      if (line[i] == '?')
	line[i] = 'O';
      i++;
    }
  return (line);
}

int	number_of_block(char *line)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (line[i] != '\0')
    {
      if (line[i] == 'X')
	j++;
      i++;
    }
  return (j);
}

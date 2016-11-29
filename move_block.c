/*
** move_block.c for project_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 05:40:57 2016 GUEYE Osir
** Last update Wed Apr 27 05:41:08 2016 GUEYE Osir
*/

#include "fonction.h"

char	*push_space(char *line, int j, int number_of_space)
{
  int	i;

  i = my_strlen(line);
  while (j < number_of_space && line[my_strlen(line) - 1])
    {
      while (i - 1 > j)
	{
	  line = my_swap_char(line, i, i - 1);
	  i--;
	}
      j++;
    }
  return (line);
}

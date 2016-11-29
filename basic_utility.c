/*
** basic_utility.c for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 00:08:34 2016 GUEYE Osir
** Last update Wed Apr 27 05:37:16 2016 GUEYE Osir
*/

#include "fonction.h"

char	*my_swap_char(char *line, int i, int j)
{
  char	tmp;

  if ((i < 0) && (j < 0))
    return (NULL);
  if ((i >= my_strlen(line)) && (j >= my_strlen(line)))
    return (NULL);
  tmp = line[i];
  line[i] = line[j];
  line[j] = tmp;
  return (line);
}

void	free_tab(char **grille)
{
  int	i;

  for (i = 0; i < my_strlen(grille[i]); i++)
    free(grille[i]);
  free(grille);
}

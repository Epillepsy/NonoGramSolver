/*
** main.c for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:03:13 2016 GUEYE Osir
** Last update Wed Apr 27 06:08:32 2016 GUEYE Osir
*/

#include "fonction.h"

char	**main_algo(char **grille, t_vector *col, t_vector *row)
{
  int	i;

  col++;
  for (i = 0; grille[i] != '\0'; i++)
    {
      grille[i] = fill_using_tips(grille[i], nelement(row, i + 1));
      grille[i] = supperpo(grille[i], to_max_left(grille[i]));
      grille[i] = fill_with_blank(grille[i], nelement(row, i + 1));
    }
  return (grille);
}

char	**looping(char **grille, t_vector *col, t_vector *row)
{
  grille = main_algo(grille, col, row);
  grille = using_col(grille, col);
  return (grille);
}

char	**using_col(char **grille, t_vector *col)
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (grille[i][j] != '\0')
    {
      if (block_coll_to_fill(grille, j, nelement(col, j + 1)) != 0)
	{
	  push_space(grille[i], j, 1);
	  i++;
	}
      j++;
    }
  return (grille);
}

void	index_value(t_vector *foo)
{
  int	i;

  my_printf("\n\n");
  while (foo->next != NULL)
    {
      for (i = 0; i < foo->tips_len; i++)
	my_printf("index: %i\ntips: %i\n", foo->index, foo->tips[i]);
      foo = foo->next;
      my_printf("\n\n");
    }
}

int	main(int argc, char *argv[])
{
  char	**grille;
  t_vector	*row;
  t_vector	*col;

  if (argc != 4 || check_args(argv[1], argv[2], argv[3]) != 0)
    {
      my_printf("\ninvalid args\n");
      return (0);
    }
  row = NewVector(" ");
  row = init_clues(argv[2]);
  col = NewVector(" ");
  col = init_clues(argv[3]);
  grille = init_grid(argv[1]);
  grille = looping(grille, col, row);
  my_aff_game_grid(grille);
  free_vector(row);
  free_vector(col);
  free_tab(grille);
  return (0);
}

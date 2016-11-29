/*
** checking_line.c for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:03:47 2016 GUEYE Osir
** Last update Wed Apr 27 00:03:52 2016 GUEYE Osir
*/

#include "fonction.h"

int	number_of_tips(t_vector *clues)
{
  int	i;
  int	total;

  i = 0;
  total = 0;
  while (i < clues->tips_len)
  {
    total += clues->tips[i];
    i++;
  }
  return (total);
}

int	box_to_fill(char *line, t_vector *clues)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i < my_strlen(line))
    {
      if (line[i] == 'X')
	     j++;
      i++;
    }
  return (number_of_tips(clues) - j);
}

int	check_intervall(char *line, int beginning, int size)
{
  int	i;

  if (beginning + size > my_strlen(line))
      return (-1);
  for (i = beginning; i < size; ++i)
    {
      if (line[i] != 'X')
	return (-1);
    }
  if (line[size] == 'X')
    return (-1);
  return (0);
}

int	line_is_good(char *line, int *tips)
{
  int	i;
  int	j;
  int	beginning;

  i = 0;
  j = 0;
  beginning = 0;
  while (i < my_strlen(line))
    {
      if (line[i] == 'X')
	{
	  if (check_intervall(line, beginning, tips[j]) == 0)
	    {
	      i = beginning + tips[j];
	      j++;
	    }
	  else
	    return (-1);
	}
      i++;
    }
  return (0);
}

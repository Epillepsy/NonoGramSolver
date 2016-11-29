/*
** check_args.c for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 01:16:42 2016 GUEYE Osir
** Last update Wed Apr 27 05:37:31 2016 GUEYE Osir
*/

#include "fonction.h"

int	try_open(char *filename)
{
  int	handle;

  if ((handle = open(filename, O_RDONLY)) == -1)
    {
      my_printf("Can't acces file %s\n", filename);
      return (-1);
    }
  close(handle);
  return(0);
}

int	is_x_here(char curr, int x_present)
{
  if (curr == 'x' || curr == 'X')
    {
      if (x_present == 1)
	{
	  return (-1);
	}
      return (1);
    }
  return (0);
}


int	is_good_dimension(char *dims)
{
  int	x_present;
  int	pos;

  pos = 0;
  x_present = 0;
  while (dims[pos] != '\0')
    {
      if (c_isdigit(dims[pos]) == 1)
	pos++;
      else if (dims[pos] == 'x' || dims[pos] == 'X')
	{
	  if ((x_present = is_x_here(dims[pos], x_present)) == -1)
	    return (-1);
	  pos++;
	}
      else
	return (-1);
    }
  if (x_present == 0)
    return (-1);
  return(0);
}

int	c_isdigit(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

int	check_args(char *dims, char *file_a, char *file_b)
{
  int	tot;

  tot = 0;
  tot = tot + is_good_dimension(dims);
  tot = tot + try_open(file_a);
  tot = tot + try_open(file_b);
  if (tot != 0)
      my_printf("Wrong usage: \"./project_easter \"NxN\" col row\"\n");
  return(tot);
}

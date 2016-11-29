/*
** data.c for my_printf in /home/bob/Documents/printf
**
** Made by MASSARD Theo
** Login   <massar_t@etna-alternance.net>
**
** Started on  Wed Apr  6 14:33:34 2016 MASSARD Theo
** Last update Tue Apr 26 14:42:56 2016 GUEYE Osir
*/

#include "libprintf.h"

t_data	*create_default()
{
  t_data	*content;

  if ((content = malloc(sizeof(content))) == NULL)
    return (NULL);
  content->nbr = 0;
  content->array = "scidoxXu%";
  content->error = 0;
  return (content);
}

int	add_flag(t_data *data, char c)
{
  if (c != '%')
    data->nbr++;
  return (0);
}

void	init_print()
{
  fl[0] = &print_s;
  fl[1] = &print_c;
  fl[2] = &print_i;
  fl[3] = &print_d;
  fl[4] = &print_o;
  fl[5] = &print_sx;
  fl[6] = &print_bx;
  fl[7] = &print_u;
}

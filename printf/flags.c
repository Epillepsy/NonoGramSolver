/*
** flags.c for my_printf in /home/bob/Documents/printf
**
** Made by MASSARD Theo
** Login   <massar_t@etna-alternance.net>
**
** Started on  Wed Apr  6 14:33:24 2016 MASSARD Theo
** Last update Tue Apr 26 14:43:23 2016 GUEYE Osir
*/

#include "libprintf.h"

int	in_array(char c, char *array)
{
  int	pos;

  pos = 0;
  while (array[pos] != '\0')
    {
      if (c == array[pos])
	return (pos);
      pos++;
    }
  return (-1);
}

int	check_flags(char *input, t_data *data)
{
  int	err;

  err = 0;
  while (*input != '\0' && !(err))
    {
      if ((*input == '%') && (NEXTC != '%') && (NEXTC != '\0'))
        {
	  if (NEXTC != '\0' && (in_array(NEXTC, data->array) + 1))
            {
	      err = add_flag(data, (NEXTC));
            } else if (NEXTC != '\0' && !(in_array(NEXTC, data->array) + 1)) {
	    data->error = 1;
	  }
        } else if (*input == '%' && NEXTC == '%') {
	err = add_flag(data, (NEXTC));
	input++;
      }
      input++;
    }
  return (0);
}

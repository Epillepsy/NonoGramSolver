/*
** utils.c for my_printf in /home/bob/Documents/printf
**
** Made by MASSARD Theo
** Login   <massar_t@etna-alternance.net>
**
** Started on  Wed Apr  6 14:31:03 2016 MASSARD Theo
** Last update Wed Apr 27 04:47:49 2016 GUEYE Osir
*/

#include "libprintf.h"

int	m_len(char *str)
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    count++;
  return (count);
}

void	clean(va_list args, t_data *data)
{
  va_end(args);
  free(data);
}

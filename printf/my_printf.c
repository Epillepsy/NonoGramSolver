/*
** my_printf.c for my_printf in /home/bob/Documents/printf
**
** Made by MASSARD Theo
** Login   <massar_t@etna-alternance.net>
**
** Started on  Wed Apr  6 14:31:55 2016 MASSARD Theo
** Last update Tue Apr 26 14:47:19 2016 GUEYE Osir
*/

#include "libprintf.h"

int	my_printf(char *test, ...)
{
  t_data	*data;
  va_list	args;

  va_start(args, test);
  if ((data = create_default()) == NULL)
    return (1);
  check_flags(test, data);
  if (data->error)
    {
      my_putstr(test);
      my_putchar('\n');
      my_putstr("[LOG] Error while parsing\n");
      my_putstr("[END]\n\n\n");
      clean(args, data);
      return (1);
    }
  print_all(test, args, data);
  clean(args, data);
  return (0);
}

void	print_all(char *input, va_list args, t_data *data)
{
  init_print();
  while (*input != '\0')
    {
      if ((*input == '%') && (NEXTC != '\0') && (NEXTC != '%'))
        {
	  fl[in_array(NEXTC, (data->array))](args);
	  input++;
        }
      else if ((*input == '%') && (NEXTC != '\0') && (NEXTC == '%'))
        {
	  my_putchar('%');
	  input++;
        }
      else
	my_putchar(*input);
      input++;
    }
}

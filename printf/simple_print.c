/*
** simple_print.c for my_printf in /home/bob/Documents/printf
**
** Made by MASSARD Theo
** Login   <massar_t@etna-alternance.net>
**
** Started on  Wed Apr  6 14:33:47 2016 MASSARD Theo
** Last update Fri Apr  8 10:12:14 2016 MASSARD Theo
*/

#include "libprintf.h"

void	print_s(va_list string)
{
  my_putstr(va_arg(string, char *));
}

void	print_c(va_list c)
{
  my_putchar(va_arg(c, int));
}

void	print_i(va_list n)
{
  my_putbase(va_arg(n, int), "0123456789");
}

void	print_d(va_list n)
{
  my_putbase(va_arg(n, int), "0123456789");
}

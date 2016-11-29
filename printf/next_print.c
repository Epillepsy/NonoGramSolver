/*
** next_print.c for my_printf in /home/bob/Documents/printf
**
** Made by MASSARD Theo
** Login   <massar_t@etna-alternance.net>
**
** Started on  Wed Apr  6 14:32:09 2016 MASSARD Theo
** Last update Tue Apr 26 14:47:36 2016 GUEYE Osir
*/

#include "libprintf.h"

void	print_o(va_list n)
{
  my_putbase_u(va_arg(n, unsigned int), "01234567");
}

void	print_sx(va_list n)
{
  my_putbase_u(va_arg(n, unsigned int), "0123456789abcdef");
}

void	print_bx(va_list n)
{
  my_putbase_u(va_arg(n, unsigned int), "0123456789ABCDEF");
}

void	print_u(va_list n)
{
  my_putbase_u(va_arg(n, unsigned int), "0123456789");
}

/*
** affstdout.c for my_printf in /home/bob/Documents/printf
**
** Made by MASSARD Theo
** Login   <massar_t@etna-alternance.net>
**
** Started on  Wed Apr  6 14:15:08 2016 MASSARD Theo
** Last update Wed Apr 27 04:46:35 2016 GUEYE Osir
*/

#include "libprintf.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  write(1, str, m_len(str));
}

void	my_putbase(int n, char *cust)
{
  int	len;

  len = m_len(cust);
  if (n < 0)
    {
      n = n * (-1);
      my_putchar('-');
    }
  if (n > len - 1)
    {
      my_putbase((n / len), cust);
    }
  my_putchar(cust[n % m_len(cust)]);
}

void	my_putbase_u(unsigned int n, char *cust)
{
  unsigned int	len;

  len = m_len(cust);
  if (n > len - 1)
    {
      my_putbase_u((n / len), cust);
    }
  my_putchar(cust[n % m_len(cust)]);
}

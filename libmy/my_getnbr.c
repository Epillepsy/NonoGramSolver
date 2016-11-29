/*
** my_getnbr.c for projet_easter in /var/Projet_Easter/NPROJECT/libmy
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:05:12 2016 GUEYE Osir
** Last update Wed Apr 27 04:22:24 2016 GUEYE Osir
*/

#include "libmy.h"

int	my_getnbr(char *str)
{
  int	i;
  int	res;
  int	test;
  int	sign;

  sign = 1;
  test = 0;
  res = 0;
  i = 0;
  while (*(str + i) != '\0')
    {
      if (*(str + i) - '0' <= 9 && *(str + i) - '0' >= 0 && test == 0)
	res = res * 10 + *(str + i) - '0';
      else if (*(str + i) == 45)
	sign *= -1;
      else
	test = 1;
      i++;
    }
  return (res * sign);
}

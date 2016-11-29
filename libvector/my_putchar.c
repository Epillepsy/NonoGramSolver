/*
** my_putchar.c for projet_easter in /var/Projet_Easter/NPROJECT/libvector
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:07:57 2016 GUEYE Osir
** Last update Wed Apr 27 04:43:31 2016 GUEYE Osir
*/

#include "libvector.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

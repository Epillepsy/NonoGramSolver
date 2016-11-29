/*
** file_exist.c for projet_easter in /var/Projet_Easter/NPROJECT/libmy
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:04:50 2016 GUEYE Osir
** Last update Wed Apr 27 05:44:22 2016 GUEYE Osir
*/

#include "libmy.h"

int	exists(char *file)
{
  int	handle;

  if ((handle = open(file, O_RDONLY)) != (-1))
    {
      close(handle);
      return (0);
    }
  return (-1);
}

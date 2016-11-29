/*
** Get_infos.c for projet_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Tue Apr 26 14:04:04 2016 GUEYE Osir
** Last update Wed Apr 27 05:36:19 2016 GUEYE Osir
*/

#include "fonction.h"

int	rank(int j)
{
  int	result;
  int	i;

  result = 0;
  for (i = 0; i < j; ++i)
    result *= 10;
  if (result == 0)
    result = 1;
  return (result);
}

int	number_of_char_in_line(char *file, int line)
{
  int	handle;
  int	i;
  int	self_line;
  char	*buffer;

  i = 0;
  self_line = 1;
  handle = open(file, O_RDONLY);
  buffer = malloc(sizeof(char));
  while (read(handle, buffer, sizeof(char)) > 0)
  {
    if (self_line != line && buffer[0] == 13)
     self_line++;
   if (self_line == line)
   {
     if (buffer[0] == 13 )
     {
       return (i);
     }
     i++;
   }
 }
 close(handle);
 return (-1);
}

int	number_of_tips_in_string(char *buffer)
{
  int	i;
  int	j;

  i = 1;
  j = 0;
  while (j < my_strlen(buffer))
  {
    if (buffer[j] == '.')
     i++;
   j++;
 }
 return (i);
}

t_vector	*return_tips(char *buffer, int line_number)
{
  t_vector	*row;
  int	i;
  int	j;
  int	 k;

  j = 0;
  k = 0;
  if (!(row = malloc(sizeof(*row))))
    return (NULL);
  row->index = line_number;
  row->tips_len = number_of_tips_in_string(buffer);
  if (!(row->tips = malloc(sizeof(int) * row->tips_len)))
    return (NULL);
  for (i = 0; i < my_strlen(buffer); i++)
  {
    if (buffer[i] == '.')
     j++;
   else
   {
     row->tips[j] = buffer[i] - 48;
     k++;
   }
 }
 return (row);
}

t_vector	*init_clues(char *file)
{
  t_vector	*row;
  int	handle;
  char	*buffer;
  int	line;
  char	*tmp;

  row = NewVector("someData");
  line = 1;
  row = malloc(sizeof(*row));
  handle = open(file, O_RDONLY);
  tmp = malloc(sizeof(char));
  buffer = malloc(sizeof(char) * 1000);
  while (read(handle, buffer, sizeof(char)) > 0)
  {
      /*row->push(row, return_tips(buffer, line));*/
    if (my_strcmp(buffer, "\n") != 0)
      tmp = concat(tmp, buffer);
    if (my_strcmp(buffer, "\n") == 0)
    {
     row = push(row, return_tips(tmp, line));
	  tmp = malloc(sizeof(char) * 100); /*to fix eventually*/
     line++;
   }      
      /*buffer = malloc(sizeof(char) * number_of_char_in_line(file, line));*/
 }
 close(handle);
 return (row);
}

/*
** header.h for my_printf in /home/bob/Documents/printf
** 
** Made by MASSARD Theo
** Login   <massar_t@etna-alternance.net>
** 
** Started on  Fri Apr  8 14:55:42 2016 MASSARD Theo
** Last update Tue Apr 26 14:45:17 2016 GUEYE Osir
*/
#ifndef __HEADER_H__
# define __HEADER_H__

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct	s_data {
  char	*array;
  int	error;
  int	nbr;
}	t_data;

typedef void (*prt) (va_list);
prt fl[8];

void	my_putchar(char);

void	my_putstr(char *);

void	my_putbase(int, char *);

void	my_putbase_u(unsigned int, char *);

int	m_len(char *);

t_data	*create_default();

int	in_array(char, char *);

int	check_flags(char *, t_data *);

int	add_flag(t_data *, char);

int	my_printf(char *, ...);

void	print_all(char *, va_list, t_data *);

void	init_print();

void	print_s(va_list);

void	print_c(va_list);

void	print_i(va_list);

void	print_d(va_list);

void	print_o(va_list);

void	print_sx(va_list);

void	print_bx(va_list);

void	print_u(va_list);

void	clean(va_list, t_data *);

#endif
#ifndef NEXTC
# define NEXTC *(input+1)
#endif
#ifndef OPTS
# define OPTS
#endif

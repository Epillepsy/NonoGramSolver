/*
** fonction.h for project_easter in /var/Projet_Easter/NPROJECT
** 
** Made by GUEYE Osir
** Login   <gueye_o@etna-alternance.net>
** 
** Started on  Wed Apr 27 06:10:00 2016 GUEYE Osir
** Last update Wed Apr 27 06:10:07 2016 GUEYE Osir
*/

#ifndef __FONCTION_H__
# define __FONCTION_H__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "libvector/libvector.h"
#include "printf/libprintf.h"
#include "libmy/libmy.h"

typedef struct	s_clues
{
  int	index;
  int	*tips;
  int	tips_len;
  struct s_clues	*next;
}	t_clues;

char	**init_grid(char *);

char	*fill_this_intervall(char *, int, int);

char	*fill_this_intervall_backwards(char *, int);

t_vector	*init_clues(char *);

t_vector	*return_tips(char *, int);

int	number_of_tips_in_string(char *);

int	number_of_char_in_line(char *, int);

int	rank(int);

char	*supperpo(char *, char *);

char	*fill_using_tips(char *, t_vector *);

char	*fill_with_blank(char *, t_vector *);

char	*is_blank(char *);

int	number_of_tips(t_vector *);

int	box_to_fill(char *, t_vector *);

int	check_intervall(char *, int, int );

int	line_is_good(char *, int *);

char	*my_swap_char(char *, int , int );

void	my_aff_game_grid(char **);

char	**fill_grid(int, int);

char	*to_max_left(char *);

int	number_of_block(char *);

int	try_open(char *);

int	c_isdigit(char);

int	check_args(char *, char *, char *);

char	*cpy_with_index(char *, int);

char	*push_space(char *, int, int);

int	grid_height(char **);

char	**using_col(char **, t_vector *);

int	block_coll_to_fill(char **, int, t_vector *);

char	**looping(char **, t_vector *, t_vector *);

void	free_tab(char **);
#endif

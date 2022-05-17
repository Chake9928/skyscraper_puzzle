/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declaration.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:41:04 by okamototake       #+#    #+#             */
/*   Updated: 2022/05/17 19:47:47 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DECLARATION_H
# define DECLARATION_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		chk_duplication(int **matrix, int dim, int id, int bld_height);
int		chk_visible_bld_count(int **matrix, int dim, int id, int *value);
void	ft_putstr(char *str);
int		arg_chk(int ac, char **av);
int		*get_value(char *str, int n);
void	output_answer(int **matrix, int dim);
int		calculate(int **matrix, int *value, int dim, int id);
int		chk_duplication(int **matrix, int dim, int id, int bld_height);
int		chk_visible_bld_count(int **matrix, int dim, int id, int *value);
int		**allocate_matrix_mem(int dim);
int		*allocate_base_matrix_mem(int dim);
void	connect_address(int **matrix, int *base_matrix, int dim);
void	freeing(int *value, int *base_matrix, int **matrix);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_memory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:01:39 by tmatsuur          #+#    #+#             */
/*   Updated: 2022/05/01 21:03:20 by tmatsuur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern void	ft_putstr(char *str);

int	**allocate_matrix_mem(int dim)
{
	int	**matrix;

	matrix = malloc(sizeof(int) * dim);
	if (!matrix)
		ft_putstr("Error\n");
	return (matrix);
}

int	*allocate_base_matrix_mem(int dim)
{
	int	*base_matrix;

	base_matrix = malloc(sizeof(int) * dim * dim);
	if (!base_matrix)
		ft_putstr("Error\n");
	return (base_matrix);
}

void	connect_address(int **matrix, int *base_matrix, int dim)
{
	int	i;

	i = 0;
	while (i < dim)
	{
		matrix[i] = base_matrix + i * dim;
		i++;
	}
}

void	freeing(int *value, int *base_matrix, int **matrix)
{
	free(value);
	free(base_matrix);
	free(matrix);
}
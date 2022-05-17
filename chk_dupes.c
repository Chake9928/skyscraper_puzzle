/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_dupes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatsuur <tmatsuur@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:02:02 by tmatsuur          #+#    #+#             */
/*   Updated: 2022/05/01 23:11:35 by tmatsuur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	chk_duplication(int **matrix, int dim, int id, int bld_height)
{
	int	i;

	i = 0;
	while (i < id / dim)
	{
		if (matrix[i][id % dim] == bld_height)
		{
			return (1);
		}
		i++;
	}
	i = 0;
	while (i < id % dim)
	{
		if (matrix[id / dim][i] == bld_height)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

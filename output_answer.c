/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_answer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatsuur <tmatsuur@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:01:39 by tmatsuur          #+#    #+#             */
/*   Updated: 2022/05/01 23:14:07 by tmatsuur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putnbr(int nb);
extern void	ft_putchar(char c);

void	output_answer(int **matrix, int dim)
{
	int	i;
	int	j;

	i = 0;
	while (i < dim)
	{
		j = 0;
		while (j < dim)
		{
			ft_putnbr(matrix[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

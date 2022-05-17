/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:01:50 by tmatsuur          #+#    #+#             */
/*   Updated: 2022/05/01 21:02:06 by tmatsuur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern int	ft_atoi(char *str);
extern int	ft_strlen(char *str);

int	arg_chk(int argc, char **argv)
{
	if (argc != 2)
	{
		return (1);
	}
	if ((ft_strlen(argv[1]) == 31)
		|| (ft_strlen(argv[1]) == 39) || (ft_strlen(argv[1]) == 47)
		|| (ft_strlen(argv[1]) == 55) || (ft_strlen(argv[1]) == 63)
		|| (ft_strlen(argv[1]) == 71))
	{
		return ((ft_strlen(argv[1]) + 1) / 2);
	}
	return (1);
}

int	*get_value(char *str, int n)
{
	int	i;
	int	j;
	int	*value;

	value = malloc(sizeof(int) * n);
	if (!value)
	{
		return (0);
	}
	i = 0;
	j = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= '0' && *(str + i) <= '9')
		{
			*(value + j) = ft_atoi(str + i);
			j++;
		}
		i++;
	}
	return (value);
}

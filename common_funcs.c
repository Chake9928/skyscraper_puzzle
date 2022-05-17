#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	str_length;

	str_length = 0;
	while (*str != '\0')
	{
		str_length++;
		str++;
	}
	return (str_length);
}

int	ft_atoi(char *str)
{
	int	i;
	int	judge;
	int	num;

	i = 0;
	judge = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			judge *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * judge);
}

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	else
	{
		number = nb;
	}
	if (number / 10 != 0)
	{
		ft_putnbr(number / 10);
	}
	ft_putchar(number % 10 + 48);
}

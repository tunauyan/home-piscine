/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:03:27 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/18 14:03:46 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int		is_valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		base_len;

	if (!is_valid_base(base))
		return ;
	num = nbr;
	base_len = ft_strlen(base);
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= base_len)
	{
		ft_putnbr_base(num / base_len, base);
		ft_putnbr_base(num % base_len, base);
	}
	else
		ft_putchar(base[num]);
}

int	main(void)
{
	ft_putnbr_base(42, "0123456789ABCDEF"); // Hexadecimaal
	write(1, "\n", 1);
	ft_putnbr_base(-42, "01"); // Binair
	write(1, "\n", 1);
	ft_putnbr_base(42, "poneyvif"); // Octaal
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789"); // Decimaal
	write(1, "\n", 1);
	return (0);
}


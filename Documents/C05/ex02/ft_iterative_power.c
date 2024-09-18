/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:50:58 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/18 14:52:23 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 3;
	printf("%d to the power of %d is %d\n", nb, power, ft_iterative_power(nb, power));

	nb = 5;
	power = 0;
	printf("%d to the power of %d is %d\n", nb, power, ft_iterative_power(nb, power));

	nb = 3;
	power = -2;
	printf("%d to the power of %d is %d\n", nb, power, ft_iterative_power(nb, power));

	return (0);
}


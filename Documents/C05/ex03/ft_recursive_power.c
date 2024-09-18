/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:53:38 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/18 14:54:31 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 3;
	printf("%d to the power of %d is %d\n", nb, power, ft_recursive_power(nb, power));

	nb = 5;
	power = 0;
	printf("%d to the power of %d is %d\n", nb, power, ft_recursive_power(nb, power));

	nb = 3;
	power = -2;
	printf("%d to the power of %d is %d\n", nb, power, ft_recursive_power(nb, power));

	return (0);
}


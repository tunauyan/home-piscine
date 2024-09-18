/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:38:08 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/18 14:45:00 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	factorial;
	
	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

int	main(void)
{
	int	nb;

	nb = 5;
	printf("Factorial of %d is %d\n", nb, ft_iterative_factorial(nb));

	nb = 0;
	printf("Factorial of %d is %d\n", nb, ft_iterative_factorial(nb));

	nb = -5;
	printf("Factorial of %d is %d\n", nb, ft_iterative_factorial(nb));

	return (0);
}


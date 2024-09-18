/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:45:53 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/18 14:49:35 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int	nb;

	nb = 5;
	printf("Factorial of %d is %d\n", nb, ft_recursive_factorial(nb));

	nb = 0;
	printf("Factorial of %d is %d\n", nb, ft_recursive_factorial(nb));

	nb = -5;
	printf("Factorial of %d is %d\n", nb, ft_recursive_factorial(nb));

	return (0);
}


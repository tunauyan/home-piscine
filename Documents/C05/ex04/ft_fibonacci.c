/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:55:41 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/18 14:57:14 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>

int	main(void)
{
	int index;

	index = 0;
	printf("Fibonacci(%d) = %d\n", index, ft_fibonacci(index));

	index = 1;
	printf("Fibonacci(%d) = %d\n", index, ft_fibonacci(index));

	index = 5;
	printf("Fibonacci(%d) = %d\n", index, ft_fibonacci(index));

	index = 10;
	printf("Fibonacci(%d) = %d\n", index, ft_fibonacci(index));

	index = -1;
	printf("Fibonacci(%d) = %d\n", index, ft_fibonacci(index));

	return (0);
}


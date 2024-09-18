/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:31:17 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/10 16:08:06 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}


int	main(void)

{
	int a = 5;
	int b = 11;
	printf("before swap a is %i and b is %i\n", a, b);

	ft_swap(&a, &b);
	printf("a is %i, b is %i\n", a, b);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:54:00 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/10 17:44:49 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a / *b ;
	*b = *a % *b ;
	*a = i;
}

int	main(void)
{
	int a = 100;
	int b = 10;
	
	ft_ultimate_div_mod(&a, &b);
	printf("*a = %i, *b = %i", a,b);
	return (0);
}

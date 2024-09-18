/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:19:09 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/10 16:53:12 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0) 
	{
		*div = a / b;
		*mod = a % b;	
	}
	//printf("div: %d  mod: %d", *div, *mod);
}
/*
int	main(void)
{
	int a = 100;
	int b = 10;
	int div;
	int mod;
	
	ft_div_mod(a, b, &div, &mod);
	return (0);
}*/

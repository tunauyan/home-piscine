/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorkingWithNumbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:10:54 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/15 14:11:50 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int	main()
{

	printf("%f\n", 5 / 4.0);
	printf("%d\n", 10 / 5);
	printf("%f\n", pow(4, 3));
	printf("%f\n", sqrt(36));
	printf("%f\n", ceil(36.50));
	printf("%f\n", ceil(36.499));	
	printf("%f\n", floor(36.99) );

	return 0;
}
/*
	5/4.00// gedeeltdoor, f = kommagetal
	10/5// gedeeltdoor, d = natuurlije getal(zonder komma)
	pow(4,3)// 4 * 3(3de macht) 
	sqrt(36)// de vierkantswortel = 6(6x6 = 36)
	ceil(36.50)// getal naar boven afronden 
	floor(36.99)// getal naar benden afronden */

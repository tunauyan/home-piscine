/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintF.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:14:08 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/12 15:24:24 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

	int	main(void)
{	
	char	oke = 'a';
	int	favNum = 90;


	printf("alles wat ik heb is %d euro en\n" , 500);
	printf("my favorite %s is %f", "number\n", 500.394039);
	printf("als ik %d krijg\n", favNum);
	printf(" maar ik wil graag %c vergelijken\n", oke);


	return 0;
}
	%s = naam
	%d = nummers
	%f = komagetallen
	%c = character

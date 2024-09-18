/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:06:52 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/11 16:10:39 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	main()
{
	char characterName[] = "max";
	int characterAge = 2;
	printf("   /| \n");
	printf("  / | \n");
	printf(" /  | \n");
	printf("/___| \n");
	printf("\n");
	printf("Er was eens een kat, hij is net 2 jaar genaamd %s die in een gezellig huis woonde.\n", characterName);
	printf("Op een dag besloot Max een avontuur te beleven en het bos naast zijn huis te verkennen.\n");
	printf("Hij ontdekte een prachtige vijver vol glinsterende vissen en kleurrijke bloemen.\n");
	printf("Vanaf toen bezocht Max elke middag de vijver en herinnerde dat hij nog maar %d is, voor een moment van rust en avontuur.\n", characterAge);

	return 0;
}		
/*	int	main(void) // dit is de uitvoering van je programma (Begin)
	return 0;/ // geeft aan dat het programma succesvol is beëindigd.(einde)

	printf("\n");// printf laat je tekst en cijfers op het scherm zien. Bijvoorbeeld, met printf("Hello!") verschijnt "Hello!" op je scherm.

	} = open, { = dicht
	
	 // char characterName[] = -> "..."   <- %s hernoem de naam naar %s BV: ("hey max.\n"); -> ("hey %s.\n", characterName");
	 char characterName[] = -> "..."   <- %d hernoem de naam naar %d BV: ("hey ik ben 2 jaar oud .\n"); -> ("hey ik ben %d jaar oud.\n", characterAge");





*/

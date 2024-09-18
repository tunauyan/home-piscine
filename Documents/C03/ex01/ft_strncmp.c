/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:09 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/15 17:12:28 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 && *s2) { // Loop totdat het einde van een van de strings is bereikt of n tekens zijn vergeleken
		if (*s1 != *s2) { // Vergelijk de huidige tekens
			return (unsigned char)*s1 - (unsigned char)*s2; // Retourneer het verschil tussen de tekens
		}
		s1++; // Ga naar het volgende teken in de eerste string
		s2++; // Ga naar het volgende teken in de tweede string
		n--; // Verlaag het aantal te vergelijken tekens
	}
	if (n) { // Als er nog tekens te vergelijken zijn
		return (unsigned char)*s1 - (unsigned char)*s2; // Vergelijk de tekens na het einde van een van de strings
	}
	return 0; // Als n 0 is, zijn de eerste n tekens gelijk
}

int	main()
{
	// Voorbeeldgebruik van ft_strncmp
	char	str1[] = "hello";
	char	str2[] = "hello";
	char	str3[] = "world";
	char	str4[] = "hel";

	printf("ft_strncmp(str1, str2, 5) = %d\n", ft_strncmp(str1, str2, 5)); // Verwacht 0
	printf("ft_strncmp(str1, str3, 5) = %d\n", ft_strncmp(str1, str3, 5)); // Verwacht een negatieve waarde
	printf("ft_strncmp(str3, str1, 5) = %d\n", ft_strncmp(str3, str1, 5)); // Verwacht een positieve waarde
	printf("ft_strncmp(str1, str4, 5) = %d\n", ft_strncmp(str1, str4, 3)); // Verwacht 0 omdat de eerste 3 tekens gelijk zijn

	return 0;
}


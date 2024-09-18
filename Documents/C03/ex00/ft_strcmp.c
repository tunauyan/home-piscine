/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:05:10 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/15 17:07:27 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2) { // Loop totdat het einde van een van de strings is bereikt
		if (*s1 != *s2) { // Vergelijk de huidige tekens
			return (unsigned char)*s1 - (unsigned char)*s2; // Retourneer het verschil tussen de tekens
		}
		s1++; // Ga naar het volgende teken in de eerste string
		s2++; // Ga naar het volgende teken in de tweede string
	}
	return (unsigned char)*s1 - (unsigned char)*s2; // Vergelijk de tekens na het einde van een van de strings
}

int	main()
{
	// Voorbeeldgebruik van ft_strcmp
	char	str1[] = "hello";
	char	str2[] = "hello";
	char	str3[] = "world";

	printf("ft_strcmp(str1, str2) = %d\n", ft_strcmp(str1, str2)); // Verwacht 0
	printf("ft_strcmp(str1, str3) = %d\n", ft_strcmp(str1, str3)); // Verwacht een negatieve waarde
	printf("ft_strcmp(str3, str1) = %d\n", ft_strcmp(str3, str1)); // Verwacht een positieve waarde

	return 0;
}


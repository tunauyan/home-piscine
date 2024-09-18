/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:14:06 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/15 17:15:18 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
	char	*start = dest;

	while (*dest) {
		dest++;
	}

	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return start;
}

int	main()
{
	char	dest[50] = "Hello, ";
	char	src[] = "World!";

	printf("Before strcat: %s\n", dest);
	ft_strcat(dest, src);
	printf("After strcat: %s\n", dest);

	return 0;
}


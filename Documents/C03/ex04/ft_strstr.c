/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:19:33 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/15 17:20:07 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*start = dest;

	while (*dest) {
		dest++;
	}

	while (nb && *src) {
		*dest = *src;
		dest++;
		src++;
		nb--;
	}

	*dest = '\0';

	return start;
}

int	main()
{
	char	dest[50] = "Hello, ";
	char	src[] = "World!";

	printf("Before strncat: %s\n", dest);
	ft_strncat(dest, src, 3);
	printf("After strncat: %s\n", dest);

	return 0;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:21:26 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/15 17:22:54 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	while (dest[dest_len] && dest_len < size) {
		dest_len++;
	}

	src_len = 0;
	while (src[src_len]) {
		src_len++;
	}

	if (dest_len == size) {
		return (size + src_len);
	}

	i = 0;
	while (src[i] && (dest_len + i + 1 < size)) {
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest_len + src_len);
}

int	main()
{
	char	dest[20] = "Hello, ";
	char	src[] = "World!";

	unsigned int	result = ft_strlcat(dest, src, sizeof(dest));

	printf("Resulting string: %s\n", dest);
	printf("Total length: %u\n", result);

	return 0;
}


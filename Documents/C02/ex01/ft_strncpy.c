/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:28:08 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/11 12:40:27 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strncpy(char *dest, const char *src, size_t n) 
{
	size_t i;
	{
    	for (i = 0; i < n && src[i] != '\0'; i++) 
	    dest[i] = src[i];
    }

    	for (; i < n; i++) {
	    dest[i] = '\0';
    }

    return dest;
}

int	main() {
	char src[] = "gaat goed hoor!";
    char dest[30];

    ft_strncpy(dest, src, 15);
    printf("bestemming: %s\n", dest);

    return 0;
}

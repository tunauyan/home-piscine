/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:51:46 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/18 13:52:31 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i]) {
		i++;
	}
	return (i);
}

int	main(void)
{
	char	str[] = "Hello, world!";
	int		len;

	len = ft_strlen(str);
	printf("The length of the string is: %d\n", len);
	return (0);
}


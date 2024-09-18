/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:54:46 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/18 13:55:10 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i]) {
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "Hello, world!";

	ft_putstr(str);
	return (0);
}


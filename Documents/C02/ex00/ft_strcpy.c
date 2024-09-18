/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:14:57 by tuyan             #+#    #+#             */
/*   Updated: 2024/09/11 12:25:59 by tuyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *strcpy(char *bestemming, const char *bron) {
	char *start = bestemming;

    while (*bron != '\0') {


	*bestemming = *bron;
	bestemming++;
	bron++;
    }

    *bestemming = '\0';

    return start;
}

int main() {
	char bron[] = "ik test printf uit!";
	char bestemming[50];

    strcpy(bestemming, bron);

    printf("ik test printf uit: %s\n", bestemming);

    return 0;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:21:30 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 12:05:25 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char	letter = 'A';
	char	to_lower = ft_tolower(letter);
	printf("Letra convertida: %c\n", to_lower);
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:22:42 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/01 23:43:17 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		count += 1;
		s++;
	}
	return (count);
}
/*
int	main(void)
{
	const char	*str = "Up To You";
	int	len = ft_strlen(str);
	printf("La cadena tiene una longitud de: %d\n", len);
	return (0);
}*/
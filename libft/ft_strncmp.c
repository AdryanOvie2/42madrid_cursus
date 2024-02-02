/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:35:21 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/02 11:25:56 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t count)
{
	while (count > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		count--;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*str1 = "Hello";
	const char	*str2 = "Hella";
	int	cmp = ft_strncmp(str1, str2, 5);
	if (cmp == 0)
		printf("Las primeras 5 letras son iguales\n");
	else if (cmp > 0)
		printf("La cadena 1 es mayor que la cadena 2\n");
	else
		printf("La cadena 1 es menor que la cadena 2\n");
	return (0);
}*/
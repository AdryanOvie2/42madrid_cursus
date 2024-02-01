/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:37:21 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/01 23:44:23 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char	destiny[20] = "Hola ";
	const char	*origin = "42Madrid";
	size_t	max_ch = 20;
    size_t total_caracteres = ft_strlcpy(destiny, origin, max_ch);
	printf("Antes de ft_strlcpy: %s\n", destiny);
    printf("Después de ft_strlcpy: %s\n", destiny);
    printf("Total de caracteres copiados: %zu\n", total_caracteres);
	return (0);
}*/
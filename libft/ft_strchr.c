/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:24:15 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/01 23:53:53 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Up To You";
	char	to_find = 'T';
	char *resultado = ft_strchr(str, to_find);
	if (resultado != NULL)
		printf("El caracter '%c' fue encontrado en: %s\n", to_find, resultado);
	else
		printf("El caracter '%c' no fue encontrado en la cadena\n", to_find);
	return (0);
}*/
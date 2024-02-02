/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:24:15 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/02 15:13:08 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*cs;

	cs = (char *)s;
	while (*cs)
	{
		if (*cs == (char)c)
			return (cs);
		else
			cs++;
	}
	if (*cs == (char)c)
		return (cs);
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
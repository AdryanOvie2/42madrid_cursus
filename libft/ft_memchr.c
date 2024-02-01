/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:50:20 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 12:58:07 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *str = "Bienvenidos a 42Madrid";
	char buscar = '4'; 
	int len = ft_strlen(str);
	const char *resultado = ft_memchr(str, buscar, len);
	if (resultado != NULL)
		printf("La primera ocurrencia encontrada es: '%c' en la posición: %ld\n",
	       	buscar, (long)(resultado - str));
	else
		printf("No se encontró '%c' en la cadena.\n", buscar);
	return (0);
}*/

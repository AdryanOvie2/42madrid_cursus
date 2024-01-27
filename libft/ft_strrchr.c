/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:26:54 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 18:13:34 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*position;

	position = NULL;
	while (*str != '\0')
	{
		if (*str == c)
			position = (char *)str;
		str++;
	}
	return (position);
}
/*
int main()
{
    const char *cadena = "Hola, mundo!";
    char *posicion;

    posicion = ft_strrchr(cadena, 'o');

    if (posicion != NULL)
	    printf("Se encontró 'o' posición: %ld\n", posicion - cadena);
    else
        printf("El carácter no se encontró en la cadena.\n");
    return (0);
}*/
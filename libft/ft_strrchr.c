/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:26:54 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/02 16:22:54 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(str);
	if (a == 0)
		return ((char *) &str[i]);
	while (i >= 0)
	{
		if (str[i] == a)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
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
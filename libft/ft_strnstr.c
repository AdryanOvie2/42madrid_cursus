/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:35:20 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 18:02:35 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;

	i = 0;
	if (*find == '\0')
		return ((char *)str);
	while (*str != '\0' && len > 0)
	{
		while (str[i] == find[i] && find[i] != '\0' && i < len)
			i++;
		if (find[i] == '\0')
			return ((char *)str);
		str++;
		len--;
	}
	return (0);
}
/*
int	main(void)
{
	const char *cadena = "Up To You!";
    const char *subcadena = "To";
    size_t max_caracteres = 15;
    char *resultado = ft_strnstr(cadena, subcadena, max_caracteres);
    if (resultado != NULL)
        printf("La subcadena fue encontrada en: %s\n", resultado);
    else
        printf("La subcadena no fue encontrada.\n");
    return (0);
}*/
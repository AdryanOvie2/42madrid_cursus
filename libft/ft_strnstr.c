/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:35:20 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/02 16:05:12 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		c = 0;
		while (hay[i + c] != '\0' && needle[c] != '\0'
			&& hay[i + c] == needle[c] && i + c < len)
			c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *cadena = "Up To You!";
    const char *subcadena = "Ya";
    size_t max_caracteres = 15;
    char *resultado = ft_strnstr(cadena, subcadena, max_caracteres);
    if (resultado != NULL)
        printf("La subcadena fue encontrada en: %s\n", resultado);
    else
        printf("%s.\n", resultado);
    return (0);
}*/
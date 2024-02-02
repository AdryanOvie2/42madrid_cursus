/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:58:48 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/02 16:29:23 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_toklen(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}
/*
int	main(void)
{
	const char	*orignal = "Hola,42,Madrid";
	size_t i = 0;
	size_t count = ft_numstring(orignal, ',');
	char **resultado = ft_split(orignal,',');
	if (resultado != NULL)
	{
		printf("Palabras dividas:\n");
		while (i < count)
		{
			printf("%s", resultado[i]);
			free(resultado[i]);
		}
		free(resultado);
	}
	else
		printf("Error al dividir la cadena");
	return (0);
}*/

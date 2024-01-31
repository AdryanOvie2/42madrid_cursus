/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:54:54 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/31 15:14:46 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (*s == '\0')
		return (ft_strdup(""));
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	s2 = malloc(sizeof(char) * len + 1);
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int main(void)
{
	const char *original = "Hello, World!";
	size_t start = 7;
	size_t len = 5;

	char *subStr = ft_substr(original, start, len);

	if (subStr != NULL)
	{
		printf("Subcadena: %s\n", subStr);
		free(subStr);
	}
	else
		printf("Error\n");
}*/
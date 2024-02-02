/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:54:54 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/02 16:49:24 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subStr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	subStr = (char *)malloc(len + 1);
	if (subStr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		subStr[i] = s[start + i];
		i++;
	}
	subStr[i] = '\0';
	return (subStr);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:34:13 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 11:55:52 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*new_str;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	new_str = (char *)malloc(len + 1);
	if (new_str != NULL)
		strcpy(new_str, str);
	return (new_str);
}
/*
int	main(void)
{
	const char *str = "Hello, 42Madrid";
	char *newString = ft_strdup(str);
	printf("Cadena duplicada: %s\n", newString);
	return (0);
}*/
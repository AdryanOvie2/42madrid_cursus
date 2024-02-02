/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:34:13 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/02 16:08:59 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*rtn;
	size_t	len;

	len = ft_strlen(str) + 1;
	rtn = malloc(sizeof(char) * len);
	if (!rtn)
		return (0);
	rtn = ft_memcpy(rtn, str, len);
	return (rtn);
}
/*
int	main(void)
{
	const char *str = "Hello, 42Madrid";
	char *newString = ft_strdup(str);
	printf("Cadena duplicada: %s\n", newString);
	return (0);
}*/
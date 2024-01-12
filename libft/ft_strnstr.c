/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:35:20 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/12 19:43:54 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strnstr(const char *str, const char *find, size_t len)
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

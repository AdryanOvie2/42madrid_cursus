/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:34:13 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/14 13:47:29 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

size_t	custom_strlen(const char *str)
{
	const char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		ptr++;
	}
	return (ptr - str);
}

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*new_str;

	if (str == NULL)
		return (NULL);
	len = custom_strlen(str);
	new_str = (char *)malloc(len + 1);
	if (new_str != NULL)
		strcpy(new_str, str);
	return (new_str);
}

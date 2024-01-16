/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:54:54 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/16 11:40:50 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	cal_ef_len(const char *str, unsigned int start, size_t length)
{
	size_t	effective_length;

	effective_length = 0;
	while (effective_length < length && str[start + effective_length] != '\0')
		effective_length++;
	return (effective_length);
}

char	*allo_and_copy(const char *str, unsigned int start, size_t effe_len)
{
	char	*sub_str;
	size_t	i;

	sub_str = (char *)malloc(effe_len + 1);
	i = 0;
	while (i < effe_len)
	{
		sub_str[i] = str[start + i];
		i++;
	}
	sub_str[effe_len] = '\0';
	return (sub_str);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	effective_length;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len || len == 0)
		return (NULL);
	effective_length = cal_ef_len(s, start, len);
	return (allo_and_copy(s, start, effective_length));
}

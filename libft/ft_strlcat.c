/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:30:46 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/16 11:38:48 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dest, const char *src, size_t count)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	available_space;

	dest_len = 0;
	src_len = 0;
	available_space = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size > dest_len)
		available_space = size - dest_len - 1;
	while (dest_len < size && *src != '\0' && available_space > 0)
	{
		dest[dest_len] = *src;
		dest_len++;
		src++;
		available_space--;
	}
	if (dest_len < size)
		dest[dest_len] = '\0';
	return (dest_len + src_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:49:45 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/02 14:43:30 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	if (!dest && !src)
		return (0);
	if (dest == src)
		return (dest);
	if (dest > src)
		while (n--)
			dest_ptr[n] = src_ptr[n];
	else
		while (n--)
			*dest_ptr++ = *src_ptr++;
	return (dest);
}

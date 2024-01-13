/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:49:45 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/13 11:27:53 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	move_left(unsigned char *dest_ptr,
			const unsigned char *src_ptr,
			size_t n)
{
	while (n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr--;
		n--;
	}
}

static void	move_right(unsigned char *dest_ptr,
			const unsigned char *src_ptr,
			size_t n)
{
	dest_ptr += n - 1;
	src_ptr += n - 1;
	while (n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (dest_ptr < src_ptr || dest_ptr >= src_ptr + n)
		move_left(dest_ptr, src_ptr, n);
	else
		move_right(dest_ptr, src_ptr, n);
	return (dest);
}

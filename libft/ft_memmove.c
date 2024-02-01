/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:49:45 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/01 23:56:57 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
int main(void)
{
	char str[] = "hola42Madrid";
	char str2[] = "Up To You";
	char *str3 = str;
	char *str4 = str2;
	printf("original: %s\n", str);
	printf("original: %s\n", str2);
	ft_memmove(str, str + 4, 4);
	printf("ft_memmove: %s\n", str);
	memmove(str2, str2 + 4, 4);
	printf("memmove: %s\n", str2);
	ft_memmove(str3, str3 + 4, 3);
	printf("ft_memmove: %s\n", str3);
	memmove(str4, str4 + 3, 4);
	printf("memmove: %s\n", str4);
	return (0);
}*/
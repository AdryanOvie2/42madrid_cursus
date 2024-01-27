/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:30:46 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 17:29:55 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dest, const char *src, size_t count)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	chars_to_copy;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	chars_to_copy = 0;
	otro_total = src_len + count;

	if (count <= dest_len)
		return (src_len + count);
	chars_to_copy = count - dest_len - 1;
	ft_strncat(dest + dest_len, src, chars_to_copy);
	dest[count - 1] = '\0';
	return (total_len);
}
/*
int	main(void)
{
	const char	*origen = "To You";
	char	destiny[10] = "Up ";
	size_t max_ch = 10;
    size_t total_ch = ft_strlcat(destiny, origen, max_ch);

	printf("Antes de strlcat_custom: %s\n", destiny);
    printf("Después de strlcat_custom: %s\n", destiny);
    printf("Total de caracteres: %zu\n", total_ch);
	return (0);
}*/
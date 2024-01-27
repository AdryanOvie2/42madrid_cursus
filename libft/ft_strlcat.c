/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:30:46 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 21:44:15 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	j;

	j = 0;
	len_dst = ft_strlen(dst);
	if (dstsize > len_dst)
	{
		while ((j + len_dst + 1) < dstsize && src[j] != '\0')
		{
			dst[len_dst + j] = src[j];
			j++;
		}
		dst[len_dst + j] = '\0';
		return (len_dst + ft_strlen(src));
	}
	return (dstsize + ft_strlen(src));
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
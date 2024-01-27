/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:31:35 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 14:11:37 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (n > 0)
	{
		*ptr = value;
		ptr++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char	buffer[10];
	size_t	i = 0;
	ft_memset(buffer, 'X', sizeof(buffer));
	while (i < sizeof(buffer))
	{
		printf("%c ", buffer[i]);
		i++;
	}
	return (0);
}*/
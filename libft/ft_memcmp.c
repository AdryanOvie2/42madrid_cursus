/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:58:20 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 13:07:05 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*str1 = "Hello"; 
	const char	*str2 = "Hella";
	int	cmp = ft_memcmp(str1, str2, 5);
	if (cmp == 0)
		printf("Las primeras 5 letras son iguales\n");
	else if (cmp > 0)
		printf("La cadena 1 es mayor que la cadena 2\n");
	else
		printf("La cadena 1 es menor que la cadena 2\n");
	return (0);
}*/

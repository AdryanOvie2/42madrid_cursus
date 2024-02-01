/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:08:51 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/31 14:04:44 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	char	*array;

	array = (char *)malloc(num_elements * element_size);
	if (array == NULL)
		return (NULL);
	ft_memset(array, 0, (num_elements * element_size));
	return (array);
}
/*
int	main(void)
{
	printf("%s\n", (char *) ft_calloc(5, 4)); 
	printf("%p", (void *) '\0');
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:08:51 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/14 12:17:31 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

typedef struct
{
    size_t		size;
    unsigned char	data[];
} Block;

static unsigned char	heap[1024];
static size_t		used_memory;

used_memory = 0;

void	*calloc_custom(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	size_t	i;
	Block *new_block;

	i = 0;
	total_size = num_elements * element_size;
	if (used_memory + total_size + sizeof(Block) <= sizeof(heap))
	{
		new_block = (Block *)&heap[used_memory];
		new_block->size = total_size;
		while (i < total_size)
		{
			new_block->data[i] = 0;
			i++;
		}
		used_memory += total_size + sizeof(Block);
		return (new_block->data);
	}
	else
	{
		return (NULL);
	}
}

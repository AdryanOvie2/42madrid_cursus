/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:15:03 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 12:16:42 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (c);
	return (0);
}
/*
int	main(void)
{
	char	character = 128;
	char	a = ft_isascii(character);
	if (a)
		printf("%c\n", a);
	else
		printf("Error, no es un caracter ascii\n");
	return (0);
}*/

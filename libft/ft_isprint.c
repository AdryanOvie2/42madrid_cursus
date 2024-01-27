/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:17:02 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 12:38:58 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}
/*
int	main(void)
{
	char	ch = 69;
	char whatis = ft_isprint(ch);
	if (whatis)
		printf("El caracter print es: %c\n", whatis);
	else
		printf("No es un caracter print\n");
	return (0);
}*/
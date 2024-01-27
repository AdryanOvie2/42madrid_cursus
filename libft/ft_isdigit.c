/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:09:33 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 12:41:06 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}
/*
int	main(void)
{
	char	ch = 50;
	char whatis = ft_isdigit(ch);
	if (whatis)
		printf("El caracter digit es: %c\n", whatis);
	else
		printf("No es un caracter digit\n");
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:13:22 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 12:33:28 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (c);
	return (0);
}
/*
int	main(void)
{
	char	ch = '-';
	char whatis = ft_isalnum(ch); 
	if (whatis)
		printf("El caracter alpha-numeric es: %c\n", whatis);
	else
		printf("No es un caracter alpha-numeric\n");
	return (0);
}*/

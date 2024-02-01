/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:42:57 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 12:35:43 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}
/*
int	main(void)
{
	char	ch = 70;
	char whatis = ft_isalpha(ch);
	if (whatis)
		printf("El caracter alpha es: %c\n", whatis); 
	else
		printf("No es un caracter alpha\n");
	return (0);
}*/

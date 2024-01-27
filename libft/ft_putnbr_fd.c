/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:21:06 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 14:18:01 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	r;

	r = n;
	if (r < 0)
	{
		ft_putchar_fd('-', fd);
		r = r * -1;
	}
	if (r >= 10)
	{
		ft_putnbr_fd(r / 10, fd);
		ft_putnbr_fd(r % 10, fd);
	}
	else
	{
		ft_putchar_fd(r + '0', fd);
	}
}

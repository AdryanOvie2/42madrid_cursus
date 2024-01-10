/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:26:54 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/10 12:29:03 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*postion;

	postion = NULL;
	while (*str != '\0')
	{
		if (*str == c)
			position = (char *)str;
		str++;
	}
	return (position);
}

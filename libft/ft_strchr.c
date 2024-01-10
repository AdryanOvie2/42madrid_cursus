/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:24:15 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/10 17:24:16 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)str);
		s++;
	}
	if (*s == (char)c)
		return ((char *)str);
	return (NULL);
}

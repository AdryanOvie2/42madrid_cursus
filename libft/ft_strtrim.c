/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:01:27 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/01/27 18:33:38 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_memmove.c"

char	*ft_strtrim(char *str)
{
	size_t	len;
	size_t	start;
	size_t	end;

	len = strlen(str);
	start = 0;
	end = len - 1;
	if (str == NULL)
		return (NULL);
	if (len == 0)
		return (str);
	while (isspace(str[start]))
		start++;
	while (end > start && isspace(str[end]))
		end--;
	ft_memmove(str, str + start, end - start + 1);
	str[end - start + 1] = '\0';
	return (str);
}

int main() {
    char input[] = "   Hola, Mundo!   ";
    printf("Cadena original: \"%s\"\n", input);
    ft_strtrim(input);
    printf("Cadena después de strtrim: \"%s\"\n", input);
    return (0);
}
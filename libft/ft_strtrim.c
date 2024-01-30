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
#include "ft_substr.c"
#include "ft_strlen.c"

static int	ft_isset(char c, const char *set)
{
    while (*set)
        if (c == *set++)
            return (1);
    return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
    char	*start;
    char	*end;

    if (!s1 || !set)
        return (0);
    start = (char *)s1;
    end = start + ft_strlen(s1);
    while (*start && ft_isset(*start, set))
        ++start;
    while (start < end && ft_isset(*(end - 1), set))
        --end;
    ret = ft_substr(start, 0, end - start);
    return (ret);
}
/*
int main(void)
{
    char input[] = "o Hola, Mundo!  oh ooo";
	char set[] = "oh";
    printf("Cadena original: %s\n", input);
    char *resul = ft_strtrim(input, set);
    printf("Cadena después de strtrim: %s\n", resul);
    return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:16:06 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/07 15:16:22 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
    t_list	*temp;

    temp = lst;
    while (temp->next)
        temp = temp->next;
    return (temp);
}
/*
int main(void)
{
    char *str = "Hello World!";
    t_list *new = ft_lstnew(str);
    printf("%s\n", (char *)new->content);
    t_list *new2 = ft_lstnew("Hello World2!");
    ft_lstadd_front(&new, new2);
    printf("%s\n", (char *)new->content);
    printf("%s\n", (char *)new->next->content);
    printf("%d\n", ft_lstsize(new));
    printf("%s\n", (char *)ft_lstlast(new)->content);
    return (0);
}*/
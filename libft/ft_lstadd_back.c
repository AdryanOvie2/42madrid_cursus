/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:19:07 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/07 15:19:29 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*temp;

    if (!*lst)
    {
        *lst = new;
        return ;
    }
    temp = ft_lstlast(*lst);
    temp->next = new;
}
/*
int main(void)
{
    char *str = "Hello World!";
    t_list *new = ft_lstnew(str);
    printf("%s\n", (char *)new->content);
    t_list *new2 = ft_lstnew("Hello World2!");
    ft_lstadd_back(&new, new2);
    printf("%s\n", (char *)new->content);
    printf("%s\n", (char *)new->next->content);
    printf("%d\n", ft_lstsize(new));
    printf("%s\n", (char *)ft_lstlast(new)->content);
    return (0);
}*/
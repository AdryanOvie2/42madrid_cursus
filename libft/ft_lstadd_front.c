/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:52:25 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/07 15:00:51 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
    return (0);
}*/

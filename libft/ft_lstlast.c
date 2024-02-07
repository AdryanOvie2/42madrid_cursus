/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:16:06 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/07 17:24:23 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
    t_list *lst;
    t_list *last;
    t_list *new;

    lst = ft_lstnew("hola");
    new = ft_lstnew("adios");
    lst->next = new;
    last = ft_lstlast(lst);
    printf("%s\n", last->content);
    return (0);
}*/

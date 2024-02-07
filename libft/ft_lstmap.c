/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:32:48 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/07 17:39:52 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	void	*buffer;

	if (!lst || !f || !del)
		return (0);
	new = NULL;
	while (lst)
	{
		buffer = f(lst->content);
		temp = ft_lstnew(buffer);
		if (!temp)
		{
			del(buffer);
			ft_lstclear(&new, (*del));
			return (new);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
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
    t_list *new3 = ft_lstmap(new, f, free);
    printf("%s\n", (char *)new3->content);
    printf("%s\n", (char *)new3->next->content);
    printf("%d\n", ft_lstsize(new3));
    printf("%s\n", (char *)ft_lstlast(new3)->content);
    return (0);
}*/

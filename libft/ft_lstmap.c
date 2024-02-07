/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:32:48 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/07 19:15:54 by aoviedo-         ###   ########.fr       */
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

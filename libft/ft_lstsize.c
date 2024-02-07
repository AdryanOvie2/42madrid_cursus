/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoviedo- <aoviedo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:10:25 by aoviedo-          #+#    #+#             */
/*   Updated: 2024/02/07 15:10:30 by aoviedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_lstsize(t_list *lst)
{
    int		i;
    t_list	*temp;

    i = 0;
    temp = lst;
    while (temp)
    {
        temp = temp->next;
        i++;
    }
    return (i);
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
    return (0);
}*/
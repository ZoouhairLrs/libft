/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:19:52 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/30 21:39:05 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(*lst))
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list	*head;
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*new;

// 	head = ft_lstnew("hello 1");
// 	first = ft_lstnew("hello 2");
// 	second = ft_lstnew("hello 3");
// 	new = ft_lstnew("hello im 1 now");

// 	head -> next = first;
// 	first -> next = second;
// 	ft_lstadd_front(&head,new);

// 	printf("%s",head -> content);
// }
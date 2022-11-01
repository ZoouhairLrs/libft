/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:33:01 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/30 22:15:47 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!lst || !new)
		return ;
	p = *lst;
	if (*lst)
	{
		while (p->next)
			p = p->next;
		p->next = new;
	}
	else
		*lst = new;
}

// int main()
// {
// 	t_list	*head;

// 	head = ft_lstnew("hello im 1");
// 	ft_lstadd_back(&head,ft_lstnew("hello im 2"));
// 	ft_lstadd_back(&head,ft_lstnew("hello im 3"));
// 	ft_lstadd_back(&head,ft_lstnew("hello im 4"));

// 	printf("%s",ft_lstlast(head)->content);
// }
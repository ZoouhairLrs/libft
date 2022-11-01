/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:35:47 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/31 23:58:50 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *hel)
{
	free(hel);
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

int main()
{
	t_list	*node  = ft_lstnew(ft_strdup("hello"));
	t_list	*node1 = ft_lstnew(ft_strdup("1337"));
	t_list	*node2 = ft_lstnew(ft_strdup("world"));

	node -> next = node1;
	node1 -> next = node2;
	// t_list *prv = node;
	// t_list *nxt = node2;
	// prv -> next = nxt;
	ft_lstdelone(node1, del);
	while(node)
	{
		printf("%s\n", node -> content);
		node = node -> next;
	}
}

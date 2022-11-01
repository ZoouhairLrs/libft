/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:31:43 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/31 14:00:37 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *hel)
{
	free(hel);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		temp = *lst;
		*lst = temp->next;
		free(temp);
	}
	*lst = NULL;
}

int main()
{
	t_list	*head;
	t_list	*first;
	t_list	*second;
	t_list	*third;

	head = ft_lstnew(ft_strdup("number 0"));
	first = ft_lstnew(ft_strdup("number 1"));
	second = ft_lstnew(ft_strdup("number 2"));
	third = ft_lstnew(ft_strdup("number 3"));

	head -> next = first;
	first -> next = second;
	second -> next = third;

	ft_lstclear(&second, del);
	printf("%s\n", head -> content);
}

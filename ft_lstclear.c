/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:31:43 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/03 15:14:22 by zlaarous         ###   ########.fr       */
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

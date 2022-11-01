/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:46:18 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/30 22:16:16 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rtr;

	rtr = malloc(sizeof(t_list));
	if (!rtr)
		return (NULL);
	rtr->content = content;
	rtr->next = NULL;
	return (rtr);
}

// int main()
// {
// 	t_list	*head;
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*third;

// 	head = ft_lstnew("hello im first");
// 	first = ft_lstnew("hello im 2");
// 	second = ft_lstnew("hello im 3");
// 	third = ft_lstnew("hello im 4");

// 	head -> next = first;
// 	first -> next = second;
// 	second -> next = third;

// 		printf("%s\n",second -> content);
// }
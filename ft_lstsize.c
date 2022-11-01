/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:26:34 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/30 21:38:19 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*curr;

	counter = 0;
	curr = lst;
	while (curr != NULL)
	{
		counter++;
		curr = curr->next;
	}
	return (counter);
}


// int main()
// {
// 	t_list	*head;
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*third;

// 	head = ft_lstnew("hello im first");
// 	first = ft_lstnew("hello im second");
// 	second = ft_lstnew("hello im third");
// 	third = ft_lstnew("hello im 4");

// 	head -> next = first;
// 	first -> next = second;
// 	second -> next = third;


// 		printf("%d\n",ft_lstsize(head));
	
// }
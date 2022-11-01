/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:30:42 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/30 21:38:58 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!(lst))
		return (NULL);
	last = lst;
	while (last->next != NULL)
		last = last->next;
	return (last);
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


// 		printf("%s\n",ft_lstlast(head)-> content);
	
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 04:37:25 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 22:55:11 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ca;
	int				i;

	ca = (unsigned char *)s;
	i = 0;
	while (ca[i] != '\0' && i < n)
	{
		ca[i] = 0;
		i++;
	}
}

// int main()
// {
//     char s[100] = "zouhair";
//     ft_bzero(s, 2);
//     printf("%c", s[2]);
// }
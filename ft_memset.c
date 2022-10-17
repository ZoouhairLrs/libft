/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 03:14:34 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 22:44:14 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int		ca;
	unsigned char		*ca1;
	int					i;

	ca = (unsigned)c;
	ca1 = (unsigned char *)b;
	i = 0;
	while (ca1[i] != '\n' && i < len)
	{
		ca1[i] = ca;
		i++;
	}
	return (b);
}

// int main()
// {
//     char s[] = "zouhair";
//     int c = 'r';

//     ft_memset(s, c, 5);
//     //memset(s, c, 5);
//     printf("%s", s);
// }
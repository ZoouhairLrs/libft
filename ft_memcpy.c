/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 05:02:17 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 23:11:29 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*ca1;
	char	*ca2;

	ca1 = (char *)dst;
	ca2 = (char *)src;
	i = 0;
	while (ca2[i] != '\0' && i < n)
	{
		ca1[i] = ca2[i];
		i++;
	}
	return (dst);
}

// int main()
// {
//     char d[] = "zouhair";
//     char s[] = "laaroussi";

//     memcpy(d, s, 8);

//     printf("%s", d);
// }
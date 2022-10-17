/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:12:02 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 23:11:41 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*ca1;
	char	*ca2;

	ca1 = (char *)dst;
	ca2 = (char *)src;
	i = 0;
	if (dst == src && len == 0)
		return (dst);
	if (dst < src)
	{
		return (memcpy(dst, src, len));
	}
	else
	{
		while (ca2[len--])
		{
			ca1[len] = ca2[len];
		}
	}
	return (dst);
}

// int main()
// {
//     char d[] = "abc";
//     char s[] = "abcde";

//     ft_memmove(d, s, 4);
//     printf("%s", d);
// }
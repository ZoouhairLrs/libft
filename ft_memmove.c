/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:12:02 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/03 15:58:52 by zlaarous         ###   ########.fr       */
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
	if (dst > src)
	{
		while (len--)
		{
			ca1[len] = ca2[len];
		}
	}
	else
	{
		dst = ft_memcpy(dst, src, len);
	}
	return (dst);
}

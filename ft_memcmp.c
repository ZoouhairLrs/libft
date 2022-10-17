/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:03:31 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 23:08:43 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ca1;
	const unsigned char	*ca2;
	size_t				i;

	i = 0;
	ca1 = (const unsigned char *)s1;
	ca2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ca1[i] != ca2[i])
			return (ca1[i] - ca2[i]);
		i++;
	}
	return (0);
}

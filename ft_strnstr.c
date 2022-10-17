/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:08:34 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/17 19:25:41 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*ca;

	i = 0;
	ca = (char *)str;
	n_len = ft_strlen(to_find);
	if (n_len == 0 || ca == to_find)
		return (ca);
	while (i < len)
	{
		c = 0;
		while (ca[i + c] != '\0' && to_find[c] != '\0'
			&& ca[i + c] == to_find[c] && i + c < len)
			c++;
		if (c == n_len)
			return (ca + i);
		i++;
	}
	return (0);
}

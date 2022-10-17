/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:59:39 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/17 17:52:27 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		i;

	ret = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			ret = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		ret = (char *)&s[i];
	return (ret);
}

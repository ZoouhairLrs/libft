/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:58:38 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/01 18:58:40 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ca1;

	ca1 = (char)c;
	i = 0;
	while (s)
	{
		if (s[i] == ca1)
			return ((char *)&s[i]);
		if (s[i] == '\0')
			return (NULL);
		s++;
	}
	return (NULL);
}

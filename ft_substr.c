/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:27:41 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/18 12:07:05 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;
	size_t		l;

	str = malloc((len + 1) * sizeof(char));
	l = ft_strlen(s);
	i = 0;
	if (!str || !s)
		return (0);
	while (i < len && len <= l)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';

	return (str);
}

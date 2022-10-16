/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:26:03 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 17:57:43 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strdup(const char *s1)
{
    char	*ma;
	int		len;
	int		i;

	len = (int) ft_strlen(s) + 1;
	ma = malloc(sizeof (char) * len);
	if (ma == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ma[i] = s[i];
		i++;
	}
	ma[i] = '\0'; //last case for '\0'.
	return (ma);
}

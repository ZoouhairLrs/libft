/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:26:03 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 22:47:32 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ma;
	int		len;
	int		i;

	len = ft_strlen(s1) + 1;
	ma = (char *)malloc(sizeof (char) * len);
	if (ma == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ma[i] = s1[i];
		i++;
	}
	ma[i] = '\0';
	return (ma);
}

// int main()
// {
// 	char s[10] = "zouhair";

// 	printf("%s", ft_strdup(s));
// }

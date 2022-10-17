/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:59:39 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 23:11:07 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ca1;

	ca1 = (char)c;
	i = ft_strlen(s) - 1;
	while (s[i] != '\0')
	{
		if (s[i] == ca1)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int main()
// {
//     char s[] = "analahiazoo";
//     int c = '0';

//     printf("%s", ft_strrchr(s, c));
//     //printf("%s", strchr(s, c));
// }
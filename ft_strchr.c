/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:58:38 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 23:09:33 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ca1;

	ca1 = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ca1)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char s[] = "zouhair";
//     int c = 'a';

//     printf("%s", ft_strchr(s, c));
//     //printf("%s", strchr(s, c));
// }
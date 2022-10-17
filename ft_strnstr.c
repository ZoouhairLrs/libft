/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:08:34 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 23:12:56 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*ca;

	i = 0;
	ca = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || ca == needle)
		return (ca);
	while (ca[i] != '\0' && i < len)
	{
		c = 0;
		while (ca[i + c] != '\0' && needle[c] != '\0'
			&& ca[i + c] == needle[c] && i + c < len)
			c++;
		if (c == n_len)
			return (ca + i);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char s1[] = "zouhair";
// 	char s2[] = "hai";

// 	printf("%s", ft_strnstr(s1, s2, 6));
// 	//printf("%s", strnstr(s1, s2, 5));
// }
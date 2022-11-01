/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:33:46 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/01 19:14:12 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_change(unsigned int i, char *s)
{
	i = 0;
	s[i] = s[i] + 1;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t		i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}

// int main()
// {
// 	char s[] = "zouhair laaroussi";
// 	void (*f)(unsigned int, char *) = ft_change;
// 	ft_striteri(s, f);
// 	printf("%s", s);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:33:02 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 22:52:06 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'A' && c >= 'Z')
	{
		c += 32;
	}
	return (c);
}

// int main ()
// {
//     int c ='A';
//     printf("%d", ft_tolower(c));
// }
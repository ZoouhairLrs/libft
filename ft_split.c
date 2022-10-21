/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:37:30 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/21 16:03:55 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	*str;

	while (s[i] == c && s[i] != NULL)
		i++;
	
	str = malloc (sizeof(char) *(i + 1))
}

int main()
{
	// "---123456789---abchds----khouribga---"
}

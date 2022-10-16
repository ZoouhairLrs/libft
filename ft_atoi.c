/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:25:21 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 15:58:59 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    sign = 1;
    result = 0;
    i = 0;
   while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i])
	{
        if (ft_isdigit(str[i]))
            //return (-1);
		    result =  result * 10 + str[i] - 48; 
		i++;
	}
	return (sign * result);
}

int main()
{
    char s[] = "1458735";

    printf("%d", ft_atoi("---15656"));
}
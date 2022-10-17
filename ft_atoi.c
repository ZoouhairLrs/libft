/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:25:21 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/17 20:27:24 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	int	previous_result;

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
	while (ft_isdigit(str[i]) && str[i])
	{
		previous_result = result;
		result = previous_result * 10;

		if (result / 10 != previous_result)
		{
			if (sign == -1)
				return (0);
			else
				return (-1);
		}
		result += (str[i] - 48);
		i++;
	}
	return (sign * result);
}

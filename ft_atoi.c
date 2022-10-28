/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:25:21 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/28 17:00:24 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	scape_space(const char *str, int *i)
{
	while (str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\v'
		|| str[*i] == '\r' || str[*i] == '\f' || str[*i] == '\n')
		(*i)++;
}

static void	signe(char const *str, int *i, int *sign)
{
	if (str[*i] == '-')
	{
		*sign *= -1;
		(*i)++;
	}
	else if (str[*i] == '+')
		(*i)++;
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	int	previous_result;

	sign = 1;
	result = 0;
	i = 0;
	scape_space(str, &i);
	signe(str, &i, &sign);
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

int main()
{
  char str[] = "-123456789";
  
printf("%d\t", ft_atoi(str));
printf("%d", atoi(str));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:19:45 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/14 02:35:21 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main()
{
    int c = '\0';
    printf("%d", ft_isalnum(c));
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:48:16 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/14 03:04:43 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    if(c >= 32 && c <= 127)
    {
        return 1;
    }else
    {
        return 0;
    }
}

// int main()
// {
//     int c = 20;

//     printf("%d", ft_isprint(c));
// }
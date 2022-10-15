/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:58:38 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/15 21:11:05 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *strchr(const char *s, int c)
{
    int i;
    char *ca1;
    
    ca1 = (char *)s;
    i = 0;
    while(ca1[i] != '\0')
    {
        if(ca1[i] == c)
        {
            i++;
        }
        ca1[i]++;
    }
    return ca1;
}

int main()
{
    char s[] = "zouhair";
    int c = 'a';

    printf("%s", strchr(s, c));
}
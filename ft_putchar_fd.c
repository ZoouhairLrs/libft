/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:35:17 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/31 14:11:46 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
int main()
{
	int fd = open("zohir.txt", O_CREAT | O_RDWR, 777);
	printf("%d\n", fd);
	ft_putchar_fd('x', fd);
}
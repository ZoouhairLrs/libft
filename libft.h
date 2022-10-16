/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:39:17 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/16 01:15:18 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<stdio.h>
#include<strings.h>
//#include<unstdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t  ft_strlcpy(char * dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int strncmp(const char *s1, const char *s2, size_t n);

#endif

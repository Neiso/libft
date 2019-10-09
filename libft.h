/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douatla <douatla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:05:09 by douatla           #+#    #+#             */
/*   Updated: 2019/10/09 12:13:59 by douatla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
 #include <stdlib.h>
 #include <stdio.h>
 #include <unistd.h>
 #include <string.h>
 #include <strings.h>
 
 int	 ft_atoi(const char *str);
 char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
 size_t     ft_strlen(const char *str);
 int     ft_isalpha(int c);
 int     ft_isalnum(int c);
 int     ft_isdigit(int c);
 int     ft_isascii(int c);
 int     ft_isprint(int c);
 int     ft_toupper(int c);
 int    ft_tolower(int c);
 void    *ft_memset(void *b, int c, size_t len);
 void     ft_bzero(void *b, size_t n);
 void   *ft_memcpy(void *dst, const void *src, size_t n);
 size_t		ft_strlcat(char *dst, char *src, size_t size);
 char	*ft_strchr(const  char *s, int c);
 void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
 void	*ft_memmove(void *dst, const void *src, size_t len);
 void	*ft_memchr(const void *s, int c, size_t n);
 int		ft_memcmp(const void *s1, const void *s2, size_t n);
 char	*ft_strrchr(const char *s, int c);
 int		ft_strncmp(const char *s1, const char *s2, size_t n);
 int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
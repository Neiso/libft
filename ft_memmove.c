/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douatla <douatla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:40:26 by douatla           #+#    #+#             */
/*   Updated: 2019/10/10 19:05:41 by douatla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str;
	char	*str2;

	i = 0;
	str = (char*)dst;
	str2 = (char*)src;
	if (dst == NULL && src == NULL)
		return (dst);
	while (len > 0)
	{
		str[len - 1] = str2[len - 1];
		len--;
	}
	dst = str;
	return (dst);
}

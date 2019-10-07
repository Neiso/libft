/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douatla <douatla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:27:09 by douatla           #+#    #+#             */
/*   Updated: 2019/10/07 11:47:54 by douatla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

size_t		ft_strlcat(char *dst, char *src, size_t size)
{
	int i;
	int j;
	int dst_size;

	dst_size = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && size > 0)
	{
		dst[i] = src[j];
		i++;
		j++;
		size--;
	}
	dst[i] = '\n';
	return (dst_size + ft_strlen(src));
}

int main()
{
	char dst[20];
	char dst2[20];
	char *src = "Hello";
	printf("\n%lu\n%s", ft_strlcat(dst, src, 15), dst);
	printf("\n%lu\n%s", strlcat(dst2, src, 15), dst2);
}
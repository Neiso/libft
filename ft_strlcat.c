/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douatla <douatla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:27:09 by douatla           #+#    #+#             */
/*   Updated: 2019/10/08 18:04:47 by douatla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst_size;

	dst_size = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	if (i == size)
		return (ft_strlen(src));
	while (src[j] && size > 1)
	{
		dst[i] = src[j];
		i++;
		j++;
		size--;
	}
	dst[i] = '\n';
	return (dst_size + ft_strlen(src));
}

// int main()
// {
// 	char dst[20] = {'0'};
// 	char dst2[20] = {'0'};
// 	char *src = "Hello";
// 	printf("%lu\n%s\n", ft_strlcat(dst, src, 20), dst);
// 	printf("\n%lu\n%s", strlcat(dst2, src, 20), dst2);
// }

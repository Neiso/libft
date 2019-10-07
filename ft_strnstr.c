/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douatla <douatla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:37:18 by douatla           #+#    #+#             */
/*   Updated: 2019/10/07 10:26:31 by douatla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strnstr(char *haystack, char *needle, int len)
{
	int i;
	int j;
	int k;

	if (needle[0] == '\0')
		return (haystack);
	if (len == 0)
		return (0);
	j = 0;
	while (haystack[j] && len != 0)
	{
		i = 0;
		k = j;
		while (haystack[k] == needle[i] && haystack[k] && needle[i] && i < len)
		{
			k++;
			i++;
		}
		if (needle[i] == '\0')
			return (&haystack[j]);
		j++;
		len--;
	}
	return (0);
}

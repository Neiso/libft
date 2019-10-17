/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douatla <douatla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:48:46 by douatla           #+#    #+#             */
/*   Updated: 2019/10/15 16:50:31 by douatla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
		return (NULL);
	if (!(str = (char*)malloc(ft_strlen(s1) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (ft_strchr(set, (int)s1[i]))
		i++;
	while (!(ft_strchr(set, (int)s1[i])))
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

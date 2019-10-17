/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itao.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douatla <douatla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:47:22 by douatla           #+#    #+#             */
/*   Updated: 2019/10/15 16:50:10 by douatla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		sign;

	i = 0;
	sign = n < 0 ? 1 : 0;
	while ((n = n / 10))
		i++;
	if (!(str = (char*)malloc(i + 1)))
		return (NULL);
	i = sign == 1 ? 1 : 0;
	while (n)
	{
		str[i] = (char)(n % 10);
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

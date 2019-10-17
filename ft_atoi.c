/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douatla <douatla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 08:51:51 by douatla           #+#    #+#             */
/*   Updated: 2019/10/15 18:15:11 by douatla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	long		nbr;
	int			i;
	int			sign;

	sign = 0;
	nbr = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
				|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = str[i] == '-' ? 1 : 0;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
		if (nbr > 2147483648 && sign == 1)
			return (0);
		if (nbr > 2147483647 && sign == 0)
			return (-1);
	}
	return (sign ? (-(nbr)) : (nbr));
}

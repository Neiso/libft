/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douatla <douatla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 08:51:51 by douatla           #+#    #+#             */
/*   Updated: 2019/10/10 16:15:09 by douatla          ###   ########.fr       */
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
	(str[i] == '-') ? sign++, i++ : nbr;
	(str[i] == '+') ? i++ : nbr;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
		if (nbr == 2147483648)
			return (-2147483648);
		if (nbr > 2147483647 && (sign % 2) == 0)
			return (-1);
		else if (nbr > 2147483647)
			return (0);
	}
	return (sign ? (-(nbr)) : (nbr));
}

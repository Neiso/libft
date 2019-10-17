/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douatla <douatla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:02:16 by douatla           #+#    #+#             */
/*   Updated: 2019/10/15 18:07:52 by douatla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*node_a;

	i = 0;
	node_a = lst;
	while (node_a->next != NULL)
	{
		i++;
		node_a = node_a->next;
	}
	return (node_a);
}

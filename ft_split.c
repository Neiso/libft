/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douatla <douatla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:53:05 by douatla           #+#    #+#             */
/*   Updated: 2019/10/15 16:51:03 by douatla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_separator(char act, char c)
{
	if (act == c)
		return (1);
	return (0);
}

int		is_word(char c_act, char c_before, char c)
{
	return (!is_separator(c_act, c) && is_separator(c_before, c));
}

int		count_words(char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (is_word(s[i], s[i - 1], c) || i == 0)
			count++;
		i++;
	}
	return (count);
}

char	*malloc_word(char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && !is_separator(s[i], c))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] && !is_separator(s[i], c))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *s, char c)
{
	int		i;
	char	**tab;

	if (s == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && is_separator(*s, c))
			s++;
		if (*s && !is_separator(*s, c))
		{
			tab[i] = malloc_word(s, c);
			i++;
			while (*s && !is_separator(*s, c))
				s++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

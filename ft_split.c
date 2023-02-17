/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:03:04 by daboyer           #+#    #+#             */
/*   Updated: 2023/02/17 16:13:34 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			words++;
		while (s[i] != c && s[i + 1] != '\0')
			i++;
	i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	char	*tab;

	tab = (char *)malloc((ft_countwords(s,c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			tab[k++] = ft_substr(s, j, i - j);
		while (s[i] == c)
			i++;
		j = i;
	i++;
	}
	tab[k] = NULL;
	return (tab);
}

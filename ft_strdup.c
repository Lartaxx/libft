/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:50:51 by daboyer           #+#    #+#             */
/*   Updated: 2023/02/13 14:31:23 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;

	i = ft_strlen(s);
	d = malloc((i + 1) * sizeof(char));
	i = -1;
	if (d)
	{
		while (s[++i])
			d[i] = s[i];
		d[i] = 0;
	}
	return (d);
}

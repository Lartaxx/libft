/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:50:51 by daboyer           #+#    #+#             */
/*   Updated: 2023/02/13 13:42:55 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*l;

	i = 0;
	l = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	while (src[i])
	{
		l[i] = src[i];
		i++;
	}
	l[i] = '\0';
	return (l);
}

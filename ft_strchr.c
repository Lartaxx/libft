/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <daboyer@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:27:02 by daboyer           #+#    #+#             */
/*   Updated: 2022/12/06 21:49:24 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int		i;

	i = -1;
	if (searchedChar == 0)
		return ((char *)string + ft_strlen(((char *)string)));
	while (((char *)string)[++i])
		if (((char *)string)[i] == (char) searchedChar)
			return (((char *)string) + i);
	return (0);
}

// #include <stdio.h>

// int		main(void)
// {
// 	printf("%s", ft_strchr("Je suis beau", 'a'));
// }
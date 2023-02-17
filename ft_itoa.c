/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:32:30 by daboyer           #+#    #+#             */
/*   Updated: 2023/02/17 13:50:37 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int	i;

	i = 0;
	if (!n)
		return (NULL);

	char *str = malloc(ft_len(n) * sizeof(char *) + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
	{
		*str = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i++] = n % 10 + 48;
		n /= 10;	
	}
	return (str);

}

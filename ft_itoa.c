/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:32:30 by daboyer           #+#    #+#             */
/*   Updated: 2023/02/17 14:59:26 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*ft_reverse(char *str)
{
	int	i;
	int	d;
	char	t;

	d = -1;
	t = 0;
	i = ft_strlen(str);
	if (str[0] == '-')
		d++;
	while (++d <= --i)
	{
		t = str[d];
		str[d] = str[i];
		str[i] = t;
	}
	return (str);
}

static int	ft_len(int n)
{
	int	i;

	i = 1;
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
	long	nb;
	int		i;
	int		len;
	char	*str;

	i = 0;
	nb = n;
	len = ft_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nb == 0)
	{
		*str = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		str[i++] = nb % 10 + 48;
		nb /= 10;	
	}
	return (ft_reverse(str));
}
int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
}

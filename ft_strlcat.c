/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:22:43 by daboyer           #+#    #+#             */
/*   Updated: 2023/02/06 15:28:54 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	i = dest_len;
	j = 0;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[20] = "Hello";
    char src[10] = "World";
    size_t size = 20;
    size_t result;

    result = ft_strlcat(dest, src, size);
    printf("Result: %lu\n", result);
    printf("Dest: %s\n", dest);
    return (0);
}


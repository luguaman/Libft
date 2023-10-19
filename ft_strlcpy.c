/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:50:51 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/18 12:53:05 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize < 1)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*#include <string.h>
int main()
{
	const char a[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char b[20];
	char c[20];
	size_t d = 8;
	printf("F: %s, %lu\n", b, strlcpy(b, a, d));
	printf("M: %s, %lu\n", c, ft_strlcpy(c, a, d));
	return 0;
}*/

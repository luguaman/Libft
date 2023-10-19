/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:08:48 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/16 17:52:56 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize == 0)
		return (slen);
	if (dstsize < dlen)
		return (slen + dstsize);
	else
		slen += dlen;
	ft_strlcpy(dst + dlen, src, dstsize - dlen);
	return (slen);
}

/*#include <string.h>
int main()
{
	const char a[20] = "mos gente?";
	char b[40] = "¿Donde caemos gente?";
	char c[40] = "¿Donde caemos gente?";
	size_t d = 1;
	printf("F: %s, %lu\n", b, strlcat(b, a, d));
	printf("M: %s, %lu\n", c, ft_strlcat(c, a, d));
	return 0;
}*/

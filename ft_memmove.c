/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:32:34 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/16 18:16:35 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	if (dst >= src)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/*#include <string.h>
int main()
{
	char a[] = "Hola buenas tardes";
	char b[] = "Hola buenas tardes";
	size_t d = 5;
	printf("F: %s\n", memmove(a + 3, a, d));
	printf("M: %s\n", ft_memmove(b + 3, b, d));
	return 0;
}*/

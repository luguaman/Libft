/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:00:14 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/16 16:52:47 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return ((void *)dst);
}

/*#include <string.h>
int main()
{
	printf("F: %s", memcpy(((void *)0), ((void *)0), 3));
	printf("M: %s", ft_memcpy(((void *)0), ((void *)0), 3));
	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:25:51 by luguaman          #+#    #+#             */
/*   Updated: 2023/11/04 19:38:57 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	a;

	a = c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == a)
			return (&((void *)str)[i]);
		i++;
	}
	return (0);
}

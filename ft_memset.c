/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:17:07 by luguaman          #+#    #+#             */
/*   Updated: 2023/11/04 19:40:38 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	v;
	size_t			i;

	v = c;
	i = 0;
	while (i < len)
	{
		((unsigned char *)str)[i] = v;
		i++;
	}
	return (str);
}

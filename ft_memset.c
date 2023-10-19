/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:17:07 by luguaman          #+#    #+#             */
/*   Updated: 2023/09/26 16:36:33 by luguaman         ###   ########.fr       */
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

/*#include <stdio.h>
#include <string.h>
int main ()
{
	char a[] = "756587ijhdfndfnbfd";
	int b = 35;
	size_t l = 7;
	printf("F: %s\n", memset(a, b, l));
	printf("M: %s\n", ft_memset(a, b, l));
	return 0;
}*/

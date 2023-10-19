/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:25:51 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/02 16:54:52 by luguaman         ###   ########.fr       */
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

/*#include <stdio.h>
#include <string.h>
int main()
{
	const char a[] = "Hola buenas";
	int b = 101;
	size_t c = 6;
	printf("C: %c\n", b);
	printf("F: %s\n", memchr(a, b, c));
	printf("M: %s\n", ft_memchr(a, b, c));
}*/

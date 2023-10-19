/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:56:43 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/12 19:02:26 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	const char a[] = "Ho8la buenas";
	const char b[] = "Hola buenas tardes";
	size_t c = 9;
	printf("F: %d\n", memcmp(a, b, c));
	printf("M: %d\n", ft_memcmp(a, b, c));
	return 0;
}*/

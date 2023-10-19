/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:08:08 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/14 14:06:39 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

/*#include <stdio.h>
int main()
{
	char *p;
	char a = 'a';
	int i = 0;
	int j;
	p = calloc(3, 4);
	while(i < 3)
	{
		j = 0;
		while (j < 4)
		{
			p[j] = a;
			j++;
			a++;
		}
		puts(p);
		i++;
	}
	return 0;
}*/

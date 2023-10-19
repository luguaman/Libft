/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:10:44 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/18 12:52:34 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*#include <string.h>
int main()
{
	char a[] = "¿Donde caemos gente?";
	printf("F: %lu, ", strlen(a));
	printf("M: %lu\n", ft_strlen(a));
	return 0;
}*/
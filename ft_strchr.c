/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:51:40 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/11 15:09:54 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	a;
	int		i;

	a = c;
	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (&((char *)str)[i]);
		i++;
	}
	if (a == '\0')
		return (&((char *)str)[i]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	const char a[] = "Hola buenas tardes";
	int	b = 0;
	printf("C: %c\n", b);
	printf("F: %s\n", strchr(a, b));
	printf("M: %s\n", ft_strchr(a, b));
	return 0;
}*/

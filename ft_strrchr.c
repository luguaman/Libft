/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:03:12 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/11 15:15:04 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == a)
			return (&((char *)str)[i]);
		i--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	const char a[] = "Hola buenas tardes";
	int b = 72;
	printf("C: %c\n", b);
	printf("F: %s\n", strrchr(a, b));
	printf("M: %s\n", ft_strrchr(a, b));
	return 0;
}*/

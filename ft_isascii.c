/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:51:12 by luguaman          #+#    #+#             */
/*   Updated: 2023/09/26 16:03:01 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int main ()
{
	char a[] = "345&$!?¿'¡{}çdggsdfgñ ssssfgñ";
	int i = 0;
	while (a[i])
	{
		printf("%c, ", a[i]);
		printf("F: %d, ", isascii(a[i]));
		printf("M: %d\n", ft_isascii(a[i]));
		i++;
	}
	return 0;
}*/

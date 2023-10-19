/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:30:12 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/02 15:50:23 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>
int main()
{
	int a = 90;
	printf("C: %c\n", a);
	printf("F: %c\n", tolower(a));
	printf("M: %c\n", ft_tolower(a));
	return 0;
}*/

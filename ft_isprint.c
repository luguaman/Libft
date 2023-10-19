/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:04:07 by luguaman          #+#    #+#             */
/*   Updated: 2023/09/26 16:09:40 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int main ()
{
	int a = 56;
	printf("F: %d, ", isprint(a));
	printf("M: %d\n", ft_isprint(a));
	return 0;
}*/

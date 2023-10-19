/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:36:48 by luguaman          #+#    #+#             */
/*   Updated: 2023/09/26 14:44:10 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	int a = 51;
	printf("%c\n", a);
	printf("F: %d\n", isdigit(a));
	printf("M: %d\n", ft_isdigit(a));
	return 0;
}*/

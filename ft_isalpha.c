/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:22:48 by luguaman          #+#    #+#             */
/*   Updated: 2023/09/26 14:34:02 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	int a = 99 - 32;
	printf("%c\n", a);
	printf("F: %d\n", isalpha(a));
	printf("M: %d\n", ft_isalpha(a));
	return 0;
}*/

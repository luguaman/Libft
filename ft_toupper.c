/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:47:11 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/02 14:53:40 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>
int main()
{
	int a = 99;
	printf("F: %c, %c\n", a, toupper(a));
	printf("M: %c, %c\n", a, ft_toupper(a));
	return 0;
}*/

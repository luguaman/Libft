/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:51:28 by luguaman          #+#    #+#             */
/*   Updated: 2023/09/26 15:49:35 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*#include <stdio.h>
#include <ctype.h>
int main()
{
	int a = 65 + 35;
	printf("%c\n", a);
	printf("F: %d\n", isalnum(a));
	printf("M: %d\n", ft_isalnum(a));
	return 0;
}*/

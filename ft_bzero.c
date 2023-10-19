/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:38:28 by luguaman          #+#    #+#             */
/*   Updated: 2023/09/26 16:53:43 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char a[] = "Hola buenas";
	char b[] = "Hola buenas";
	size_t c = 5;
	bzero(a, c);
	ft_bzero(b, c);
	printf("F: %s\n", a);
	printf("M: %s\n", b);
	return 0;
}*/

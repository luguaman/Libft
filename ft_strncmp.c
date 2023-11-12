/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:13:34 by luguaman          #+#    #+#             */
/*   Updated: 2023/11/04 19:51:09 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	while (i < n && s1 [i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else if ((s1[i + 1] == '\0' || s2[i + 1] == '\0') && (i + 1 != n))
			return (((unsigned char *)s1)[i + 1]
				- ((unsigned char *)s2)[i + 1]);
		i++;
	}
	return (0);
}

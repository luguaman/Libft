/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:12:13 by luguaman          #+#    #+#             */
/*   Updated: 2023/11/22 17:33:11 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cpy1(char *ptr, const char *s1)
{
	int	i;

	i = 0;
	while (((char *)s1)[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = malloc(len1 + len2 + 1);
	if (!ptr)
		return (NULL);
	cpy1(ptr, s1);
	i = 0;
	while (((char *)s2)[i] != '\0')
	{
		ptr[len1] = s2[i];
		len1++;
		i++;
	}
	ptr[len1] = '\0';
	return (ptr);
}

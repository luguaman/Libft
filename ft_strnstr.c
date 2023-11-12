/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:09:55 by luguaman          #+#    #+#             */
/*   Updated: 2023/11/04 19:51:26 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hays, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (((char *)needle)[0] == '\0')
		return ((char *)hays);
	i = 0;
	while (hays[i] != '\0' && i < len)
	{
		j = 0;
		while ((hays[i + j] == needle[j]) && (i + j < len))
		{
			if (hays[i + j] == '\0' && needle[j] == '\0')
				return ((char *)hays + i);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)hays + i);
		i++;
	}
	return (0);
}

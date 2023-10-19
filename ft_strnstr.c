/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:09:55 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/16 15:47:06 by luguaman         ###   ########.fr       */
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

/*#include <string.h>
int main()
{
	char *big = "abcdef";
 	char *little = "abc\375xx";
 	size_t max = 3;
	printf("F: %s\n", strnstr(big, little, max));
	printf("M: %s\n", ft_strnstr(big, little, max));
	return 0;
}*/

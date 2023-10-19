/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:48:17 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/16 16:21:33 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	ptr = malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = ((char *)s1)[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*#include <string.h>
int main()
{
	const char a[] = "¿Donde caemos, gente?";
	printf("F: %s", strdup(a));
	printf("M: %s", ft_strdup(a));
	return(0);
}*/

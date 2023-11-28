/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:53:03 by luguaman          #+#    #+#             */
/*   Updated: 2023/11/22 17:35:11 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_start(const char *s, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	c;

	c = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s[i] == s2[j])
			{
				c++;
				break ;
			}
			j++;
		}
		if (s2[j] == '\0')
			return (c);
		i++;
	}
	return (c);
}

static size_t	find_end(const char *s, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	c;

	c = 0;
	i = ft_strlen(s) - 1;
	while (s[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s[i] == s2[j])
			{
				c++;
				break ;
			}
			j++;
		}
		if (s2[j] == '\0')
			return (c);
		i--;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	c;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	if (find_start(s1, set) == ft_strlen(s1))
		return (ft_strdup(""));
	c = ft_strlen(s1) - find_start(s1, set) - find_end(s1, set);
	ptr = malloc(c + 1);
	if (!ptr)
		return (NULL);
	j = find_start(s1, set);
	i = 0;
	while (j < (ft_strlen(s1) - find_end(s1, set)))
	{
		ptr[i] = ((char *)s1)[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (&ptr[0]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:55:28 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/19 13:21:13 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (i < ft_strlen(s))
	{
		if (((char *)s)[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

static size_t	max_size(char const *s, char c)
{
	size_t	i;
	size_t	size;
	size_t	max;

	i = 0;
	max = 0;
	while (i < ft_strlen(s))
	{
		size = 0;
		while (((char *)s)[i] != c && ((char *)s)[i] != '\0')
		{
			size++;
			i++;
		}
		if (size > max)
			max = size;
		i++;
	}
	return (max);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	size;
	size_t	i;
	char	*ptr;
	char	**str;

	count = count_words(s, c);
	size = max_size(s, c);
	str = calloc(count + 1, size + 1);
	i = 0;
	count = 0;
	while (i < ft_strlen(s))
	{
		size = 0;
		while ((((char *)s)[i + size] != c) && ((char *)s)[i] != '\0')
			size++;
		ptr = ft_substr(s, i, size);
		str[count] = ptr;
		free(ptr);
		i += size;
		i++;
		printf("%c\n", ((char *)s)[i]);
		count++;
	}
	return (str);
}

/*int main()
{
	char a[] = "Hola Buenas Tardes Damas Caballeros Y Gente";
	char b = ' ';
	ft_split(a, b);
	return 0;
}*/

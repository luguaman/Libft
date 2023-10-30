/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:55:28 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/30 17:35:21 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	*str;
	char	trim[1];

	trim[0] = c;
	str = ft_strtrim(s, trim);
	i = 0;
	count = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == c && str[i -1] != c && str[i +1] != '\0')
			count++;
		i++;
	}
	return (count + 1);
}

static void	mem_free(size_t count, char **str)
{
	while (count--)
	{
		free(str[count]);
	}
	free(str);
}

/*static void	copy(const char *s, char c, size_t i, size_t count, char **str)
{
	size_t	size;
	char	*temp;

	while (i < ft_strlen(s))
	{
		size = 0;
		if (((char *)s)[i] != c)
		{
			while (((char *)s)[i + size] != c && ((char *)s)[i + size] != '\0')
				size++;
			temp = malloc(size);
			if (!temp)
				mem_free(count, str);
			temp = ft_substr(s, i, size);
			str[count] = temp;
			count++;
			i += size;
			free(temp);
		}
		i++;
	}
	str[count] = NULL;
}*/

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	size;
	size_t	count;
	char	**str;

	str = malloc(count_words(s, c) + 1 * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	count = -1;
	while (i < ft_strlen(s))
	{
		size = 0;
		if (((char *)s)[i] != c)
		{
			while (((char *)s)[i + size] != c && ((char *)s)[i + size] != '\0')
				size++;
			str[count++] = ft_substr(s, i, size);
			i += size;
		}
		i++;
	}
	str[count] = NULL;
	return (str);
}

int main()
{
	char a[] = "      Split    this   for   me     !   ";
	char b = ' ';
	char	**c;
	size_t	i;
	c = ft_split(a, b);
	i = 0;
	while (i < count_words(a, b))
	{
		printf("%s\n", c[i]);
		i++;
	}
	mem_free(count_words(a, b), c);
	return 0;
}

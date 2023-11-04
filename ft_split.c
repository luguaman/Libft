/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:55:28 by luguaman          #+#    #+#             */
/*   Updated: 2023/11/04 18:20:53 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	*str;

	str = (char *)s;
	i = 0;
	count = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] != c && i < ft_strlen(str))
		{
			count++;
			while (str[i] != c && i < ft_strlen(str))
				i++;
		}
		i++;
	}
	return (count);
}

static void	*mem_free(size_t count, char **str)
{
	while (count--)
	{
		free(str[count]);
	}
	free(str);
	return (NULL);
}

static char	*str_cpy(char *s, char *ptr, size_t i, size_t size)
{
	size_t	n;

	n = 0;
	while (n < size && s[i] != '\0')
	{
		ptr[n] = s[i];
		n++;
		i++;
	}
	return (ptr);
}

static char	**split_words(char **str, size_t i, char *s, char c)
{
	char	*ptr;
	size_t	size;
	size_t	count;

	count = 0;
	while (count < count_words(s, c))
	{
		size = 0;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i + size] != c && s[i + size] != '\0')
				size++;
			ptr = calloc(1, size + 1);
			if (ptr == NULL)
				return (mem_free(count, str));
			str[count] = str_cpy(s, ptr, i, size);
			count++;
			i += size;
		}
		i++;
	}
	str[count] = 0;
	free(ptr);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**str;

	if (s == '\0')
		return ((char **)ft_strdup(""));
	i = 0;
	str = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (str)
	{
		if (count_words(s, c) == 0)
		{
			str[0] = 0;
			return (str);
		}
		return (split_words(str, i, (char *)s, c));
	}
	return (NULL);
}

/*int main()
{
	char a[] = "split  ||this|for|me|||||!|";
	char b = '|';
	char	**c;
	size_t	i;
	c = ft_split(a, b);
	i = 0;
	while (i < count_words(a, b))
	{
		printf("%s\n", c[i]);
		i++;
	}
//	mem_free(count_words(a, b), c);
	return 0;
}*/ 

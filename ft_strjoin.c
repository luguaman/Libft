/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:12:13 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/17 13:56:40 by luguaman         ###   ########.fr       */
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

	if (*(char *)s1 == '\0' && *(char *)s2 == '\0')
		return (ft_strdup(""));
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

/*int main()
{
	char a[] = "lorem ipsum";
	char b[] = "dolor sit amet";
	printf("Las dos llenas: %s\n", ft_strjoin(a, b));
	char c[] = "\0lorem ipsum";
	char d[] = "dolor sit amet";
	printf("Primer caracter S1: %s\n", ft_strjoin(c, d));
	char e[] = "lorem ipsum";
	char f[] = "\0dolor sit amet";
	printf("Primer Caracter S2: %s\n", ft_strjoin(e, f));
	char g[] = "";
	char h[] = "";
	printf("Las dos vacias: %s", ft_strjoin(g, h));
	return 0;	
}*/

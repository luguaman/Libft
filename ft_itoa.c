/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:26:47 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/24 15:19:13 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int		count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

/*static char	*negative(char *str, int n)
{
	int	len;

	n *= -1;
	len = count_digits(n) + 2;
	str = malloc(len);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (n)
	{
		len--;
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	str[0] = '-';
	return (str);
}*/

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = count_digits(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[len--] = '\0';
	while (n)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

/*int main()
{
	printf("0, Str: %s\n", ft_itoa(0));
	printf("9, Str: %s\n", ft_itoa(9));
	printf("-9, Str: %s\n", ft_itoa(-9));
	printf("10, Str: %s\n", ft_itoa(10));
	printf("-10, Str: %s\n", ft_itoa(-10));
	printf("8124, Str: %s\n", ft_itoa(8124));
	printf("-8124, Str: %s\n", ft_itoa(-8124));
	printf("-9874, Str: %s\n", ft_itoa(-9874));
	return 0;
}*/

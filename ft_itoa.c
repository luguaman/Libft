/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:26:47 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/25 15:05:26 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int		count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	temp;
	int		len;

	temp = n;
	len = count_digits(temp);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (temp == 0)
		str[0] = '0';
	if (temp < 0)
	{
		temp *= -1;
		str[0] = '-';
	}
	str[len--] = '\0';
	while (temp)
	{
		str[len] = temp % 10 + '0';
		temp = temp / 10;
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

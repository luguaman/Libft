/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:26:47 by luguaman          #+#    #+#             */
/*   Updated: 2023/10/19 15:09:20 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int		temp;
	int		count;

	temp = n;
	count = 0;
	if (n == 0)
		return (1);
	while (temp > 0)
	{
		count++;
		temp = temp / 10;
	}
	return (count);
}

static char	*negative(char *str, int n)
{
	int	temp;

	temp = count_digits(n *= -1);
	str = malloc(temp + 1);
	if (!str)
		return (NULL);
	str[temp + 1] = '\0';
	while (temp > 0)
	{
		str[temp] = n % 10 + '0';
		n = n / 10;
		temp--;
	}
	str[temp] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		temp;

	if (n < 0)
	{
		str = NULL;
		str = negative(str, n);
		return (str);
	}
	temp = count_digits(n);
	str = malloc(temp + 1);
	if (!str)
		return (NULL);
	str[temp] = '\0';
	while (temp--)
	{
		str[temp] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

/*int main()
{
	int a = 0;
	printf("Str: %s", ft_itoa(a));
	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:27:40 by luguaman          #+#    #+#             */
/*   Updated: 2023/11/04 19:35:29 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	blanks(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
		i++;
	return (i);
}

static int	symbol(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '-' || str[i] == '+')
		i++;
	if (i > 1)
		return (0);
	else if (str[0] == '-')
		i *= -1;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	r;
	int	s;

	s = 1;
	r = 0;
	i = blanks(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (symbol(str + i) == 0)
			return (0);
		else
		{
			s *= symbol(str + i);
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	return (r * s);
}

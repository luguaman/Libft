/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:21:40 by luguaman          #+#    #+#             */
/*   Updated: 2023/11/04 09:43:08 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	s_list	list;
	t_list	new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new = content;
	list.content = new;
	list.next = NULL;
	return (new);
}

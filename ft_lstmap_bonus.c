/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguaman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:51:15 by luguaman          #+#    #+#             */
/*   Updated: 2023/11/12 03:57:48 by luguaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	nlst = ft_lstnew(f(lst->content));
	if (!nlst)
		return (NULL);
	temp = nlst;
	lst = lst->next;
	while (lst)
	{
		nlst->next = ft_lstnew(f(lst->content));
		if (!nlst->next)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		nlst = nlst->next;
		lst = lst->next;
	}
	nlst->next = NULL;
	return (temp);
}

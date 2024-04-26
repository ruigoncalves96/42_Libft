/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:03:49 by randrade          #+#    #+#             */
/*   Updated: 2024/04/26 16:41:22 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*new_node;

	if (!lst)
		return (NULL);
	map = NULL;
	while (lst)
	{
		if (f)
			new_node = ft_lstnew(f(lst->content));
		else
			new_node = ft_lstnew(lst->content);
		if (new_node == NULL)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, new_node);
		lst = lst->next;
	}
	return (map);
}
/*
#include <stdio.h>

int	main(void)
{
}
*/
/*

----- Parameters -----

	lst: The address of a pointer to a node.
	f: The address of the function used to iterate on the list.
	del: The address of the function used to delete the content of
a node if needed.

----- Return Value -----

	The new list.
	NULL if the allocation fails.

----- External functs -----

	malloc, free.

----- Description -----

	Iterates the list ’lst’ and applies the function ’f’ on the content 
of each node. 
	Creates a new list resulting of the successive applications of
the function ’f’. 
	The ’del’ function is used to delete the content of a node if needed.

*/

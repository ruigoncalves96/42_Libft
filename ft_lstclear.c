/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:11:49 by randrade          #+#    #+#             */
/*   Updated: 2024/04/26 00:50:41 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;
	t_list	*temp;

	if (!lst || !del)
		return ;
	i = *lst;
	while (i)
	{
		temp = i;
		i = i->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
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
	del: The address of the function used to delete the content of the node.

----- Return Value -----
	
	None.

----- External Functs -----

	free.

----- Description -----

	Deletes and frees the given node and every successor of that node,
using the function ’del’ and free(3).
	Finally, the pointer to the list must be set to NULL.

*/

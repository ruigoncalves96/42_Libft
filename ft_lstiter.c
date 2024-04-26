/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 00:51:30 by randrade          #+#    #+#             */
/*   Updated: 2024/04/26 01:03:05 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
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

----- Return Value -----

	None.

----- External Functs -----

	None.

----- Description -----

	Iterates the list ’lst’ and applies the function ’f’ on the content
of each node.

*/

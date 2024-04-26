/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:21:44 by randrade          #+#    #+#             */
/*   Updated: 2024/04/26 00:24:55 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	**vector = (t_list **) ft_calloc(3, sizeof(t_list *));
	vector[0] = ft_lstnew("Free");
	vector[1] = ft_lstnew("the");
	vector[2] = ft_lstnew("duck!");

	printf("Before Function:\n");
	printf("%s\n", (char *)vector[0]->content);
	printf("%s\n", (char *)vector[1]->content);
	printf("%s\n", (char *)vector[2]->content);

	ft_lstadd_front(vector, vector[2]);

	printf("\nAfter Function:\n");
	printf("%s\n", (char *)vector[0]->content);
	printf("%s\n", (char *)vector[1]->content);
	printf("%s\n", (char *)vector[2]->content);
}
*/
/*

----- Parameters -----

	lst: The address of a pointer to the first link of a list.
	new: The address of a pointer to the node to be added to the list.

----- Return Value -----

	None.

----- External functs -----

	None.

----- Description -----

	Adds the node ’new’ at the beginning of the list.

*/

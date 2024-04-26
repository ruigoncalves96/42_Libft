/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:08:58 by randrade          #+#    #+#             */
/*   Updated: 2024/04/26 00:34:04 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL)
		return ;
	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list  **vector = (t_list **) ft_calloc(3, sizeof(t_list *));
	vector[0] = ft_lstnew("Free");
	vector[1] = ft_lstnew("the");
	vector[2] = ft_lstnew("duck!");

	vector[0]->next = vector[1];
	vector[1]->next = vector[2];
	
	printf("Before Function:\n");
	printf("%s\n", (char *)vector[0]->content);
	printf("%s\n", (char *)vector[1]->content);
	printf("%s\n", (char *)vector[2]->content);
	
	ft_lstadd_back(vector, vector[0]);
	
	printf("\nAfter Function:\n");
	printf("%s\n", (char *)vector[0]->content);
	printf("%s\n", (char *)vector[1]->content);
	printf("%s\n", (char *)vector[2]->content);
	printf("%s\n", (char *)vector[2]->next->content);
}
*/
/*

----- Parameters -----

	lst: The address of a pointer to the first link of a list.
	new: The address of a pointer to the node to be added to the list.

----- Return Value -----

	None.

----- External functs. -----

	None.

----- Description -----

	Adds the node ’new’ at the end of the list.

*/

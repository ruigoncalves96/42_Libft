/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:31:52 by randrade          #+#    #+#             */
/*   Updated: 2024/04/25 20:11:21 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
/*
#include <stdio.h>

void	ft_del_content(void *content)
{
	free(content);
}

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
	
	ft_lstdelone(vector[1], (ft_del_content));
}
*/
/*

----- Parameters -----

	lst: The node to free.
	del: The address of the function used to delete the content.

----- Return Value -----

	None.

----- External Functs -----

	Free.

----- Description -----

	Takes as a parameter a node and frees the memory of the node’s
content using the function ’del’ given as a parameter and free the node.
	The memory of ’next’ must not be freed.

*/

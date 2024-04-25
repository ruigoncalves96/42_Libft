/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:45:09 by randrade          #+#    #+#             */
/*   Updated: 2024/04/25 16:56:33 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
	
	printf("%s\n", (char *)vector[0]->content);
	printf("%s\n", (char *)vector[1]->content);
	printf("%s\n", (char *)vector[2]->content);
	
	printf("\n%s\n", (char *)(ft_lstlast(vector[0]))->content);
}
*/
/*

----- Parameters -----

	lst: The beginning of the list.

----- Return Value -----

	Last node of the list.

----- External functs -----

	None.

----- Description -----

	Returns the last node of the list.

*/

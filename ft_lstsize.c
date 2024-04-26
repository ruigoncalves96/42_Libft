/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 00:49:36 by randrade          #+#    #+#             */
/*   Updated: 2024/04/26 00:28:42 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		++i;
	}
	return (i);
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

	printf("\n%d\n", ft_lstsize(vector[0]));
}
*/
/*

----- Parameters -----

	lst: The beginning of the list.

----- Return Value -----

	The length of the list.

----- External functs -----

	None.

----- Description -----

	Counts the number of nodes in a list.

*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:21:44 by randrade          #+#    #+#             */
/*   Updated: 2024/04/25 00:37:46 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{

	char    *str = "str";
	char    *str2 = "str2";
	char    *str3 = "str3";
	char    *str4 = "str4";
	t_list	*first = NULL;
	t_list  *string = ft_lstnew(str);
	t_list  *string2 = ft_lstnew(str2);
	t_list  *string3 = ft_lstnew(str3);
	t_list  *string4 = ft_lstnew(str4);

	ft_lstadd_front(&first, string4);
//	ft_lstadd_front(&first, string3);
//	ft_lstadd_front(&first, string2);
//	ft_lstadd_front(&first, string);

	printf("%s\n", (char *)first->content);
	printf("%s\n", (char *)string->content);
	printf("%s\n", (char *)string2->content);
	printf("%s\n", (char *)string3->content);
	printf("%s\n", (char *)string4->content);

	free(string);
	free(string2);
	free(string3);
	free(string4);
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

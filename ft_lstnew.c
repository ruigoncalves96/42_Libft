/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:24:53 by randrade          #+#    #+#             */
/*   Updated: 2024/04/24 20:35:51 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *) malloc(sizeof(*lst));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "Free the duck!";
	char	*str2 = "NOW!";
	t_list	*duck = ft_lstnew(str);
	t_list	*ducky = ft_lstnew(str2);
	duck->next = ducky;

	printf("str pointer = %p\n", str);
	printf("str2 pointer = %p\n\n", str2);

	printf("LIST 1\n\n");
	printf("pointer list 1 = %p\n", duck);
	printf("content = %s --> pointer = %p\n", (char *)duck->content,
							(char *)duck->content);
	printf("pointer next = %p\n", duck->next);
	printf("\nLIST 2\n\n");
	printf("pointer list 2 = %p\n", ducky);
	printf("content = %s --> pointer = %p\n", (char *)ducky->content,
							(char *)ducky->content);
	printf("pointer next = %p\n", ducky->next);

	free(duck);
	free(ducky);
}
*/
/*

----- Parameters -----

	content: The content to create the node with.

----- Return Value -----

	The new node.

----- External functs -----

	malloc.

----- Description -----

	Allocates (with malloc(3)) and returns a new node.
	The member variable ’content’ is initialized with
the value of the parameter ’content’.
	The variable ’next’ is initialized to NULL.

*/

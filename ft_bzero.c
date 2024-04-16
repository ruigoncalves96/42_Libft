/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:14:07 by randrade          #+#    #+#             */
/*   Updated: 2024/04/16 14:47:09 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello World";
	char	str1[] = "Hello World";
	int	i;

	bzero(str, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", str[i]);
		i++;
	}
	printf("%s\n", str+5);
	ft_bzero(str1, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", str1[i]);
		i++;
	}
	printf("%s\n", str1+5);
}*/

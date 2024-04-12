/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:14:07 by randrade          #+#    #+#             */
/*   Updated: 2024/04/12 13:55:19 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t	i;

	if (s == NULL)
		return ;
	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World";
	ft_bzero(str, 5);
	printf("%s\n", str);
	printf("%s\n", str+5);
}*/

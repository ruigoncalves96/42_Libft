/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:12:40 by randrade          #+#    #+#             */
/*   Updated: 2024/04/10 18:29:45 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	size_t	i;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

#define	BUF_SIZE 20

int	main(void)
{
	char	buffer[BUF_SIZE + 1];
	char	string[] = "Hello World"; 

	ft_memset(buffer, 0, sizeof(buffer));
	ft_memset(string, 'A', 5);
	printf("\nBuffer contents: %s\n", string);
	ft_memset(buffer+10, 'B', 10);
	printf("\nBuffer contents: %s\n", buffer);
}*/

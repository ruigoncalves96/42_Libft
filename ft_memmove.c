/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:29:24 by randrade          #+#    #+#             */
/*   Updated: 2024/04/15 17:03:06 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	i = len - 1;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i >= 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Hello World!";
	char	str2[] = "000000000";

	printf("%s\n", str1);
	char	*ptr1 = (char *)memmove(str2, str1, 5);
	printf("%s\n", str2);
	printf("%s\n\n", ptr1);

	printf("%s\n", str1);
	char	*ptr2 = (char *)ft_memmove(str2, str1, 5);
	printf("%s\n", str2);
	printf("%s\n", ptr2);
}*/

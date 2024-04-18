/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:29:24 by randrade          #+#    #+#             */
/*   Updated: 2024/04/18 01:24:38 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	i = len - 1;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src < dest)
	{
		while (
	}
	while (i >= 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i--;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "lorem ipsum dolor sit amet";
	char	str2[] = "orem ipsum dolor sit amet";

	printf("%s\n", str1);
	char	*ptr1 = (char *)ft_memmove(str1, str2, 8);
	printf("%s\n", str2);
	printf("%s\n\n", ptr1);
/*
	printf("%s\n", str1);
	char	*ptr2 = (char *)ft_memmove(str1, str2, 8);
	printf("%s\n", str2);
	printf("%s\n", ptr2);
*/
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 00:05:32 by randrade          #+#    #+#             */
/*   Updated: 2024/04/18 00:33:52 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL || s2 == NULL || !n)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1 = "test\200";
	char	*str2 = "test\0";
	int	x = 6;

	printf("%d\n", strncmp(str2, str1, x));
	printf("%d\n", ft_strncmp(str2, str1, x));
}*/

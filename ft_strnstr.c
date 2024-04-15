/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 00:41:22 by randrade          #+#    #+#             */
/*   Updated: 2024/04/15 10:23:15 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	if (haystack == NULL || needle == NULL || len == 0)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *) &haystack[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*haystack = "Hello my name is Rui";
	char	*needle = "my";
	int	len = 20;

	printf("function : %s\n", strnstr(haystack, needle, len)); 
	printf("ft_function : %s\n", ft_strnstr(haystack, needle, len)); 
}
*/

/*
   If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack,
     NULL is returned; otherwise a pointer to the first character of the first occurrence of
     needle is returned.
*/
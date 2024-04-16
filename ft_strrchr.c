/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:32:13 by randrade          #+#    #+#             */
/*   Updated: 2024/04/16 14:49:09 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	if (s == NULL)
		return (NULL);
	while (s[i] != (char) c && i > 0)
		i--;
	if (s[i] != (char)c)
		return (NULL);
	return ((char *)s + i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
          const char      *s = "Hello World!";
          int     c = 'o';
 
          printf("string : %s\n\n", s);
          printf("char : %c\n\n", c);
          printf("string : %s\n", ft_strrchr(s, c));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:58:46 by randrade          #+#    #+#             */
/*   Updated: 2024/04/18 17:03:33 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s+start, len + 1);
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World! My name is Rui.";
	char	*str2 = ft_substr("tripouille", 0, 42000);

	printf("%s\n", str);
	printf("%s\n", str2);

	free(str2);
}

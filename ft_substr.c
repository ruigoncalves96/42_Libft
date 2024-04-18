/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:58:46 by randrade          #+#    #+#             */
/*   Updated: 2024/04/18 16:11:20 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, (char *)start, len);
	return (ptr);
}
//
//#include <stdio.h>
//
//int	main(void)
//{
//}

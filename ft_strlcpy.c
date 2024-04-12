/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:27:07 by randrade          #+#    #+#             */
/*   Updated: 2024/04/12 14:35:09 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
}
*/
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Hello World!";
	char	dest[15];

	strlcpy(dest, src, 5);
	printf("%s\n", dest);
}

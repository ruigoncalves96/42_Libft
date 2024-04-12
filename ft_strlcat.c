/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:11:11 by randrade          #+#    #+#             */
/*   Updated: 2024/04/12 22:26:56 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (src == NULL || dst == NULL || !size)
		return (src_len);
	if (size < dest_len)
		return (size + src_len);
	size -= dest_len;
	while (*dst)
		dst++;
	while (*src && --size)
		*dst++ = *src++;
	*dst = '\0';
	return (dest_len + src_len);
}
/*
#include <string.h>
#include <stddef.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World!";
	char	dest[10] = "Hey,";
	size_t	size = 10;
	size_t	x;

	printf("Src before function: %s\n", str);
	printf("Dest before function: %s\n\n", dest);

	x = strlcat(dest, str, size);

	printf("Src after function: %s\n", str);
	printf("Dest after function: %s\n\n", dest);	
	if (x)
		printf("String dest last byte character: %d\n", dest[ft_strlen(dest)]);
	printf("%zu\n", x);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:37:39 by randrade          #+#    #+#             */
/*   Updated: 2024/04/09 13:45:16 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int     main(void)
{
        int     c = '\0';

        while (c <= 127)
        {
                if (ft_isprint(c) != 0)
                        printf("%c : is print\n", c);
                else
                        printf("%c : is not print\n", c);
                c++;
        }
}*/

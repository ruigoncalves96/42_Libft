/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:24:34 by randrade          #+#    #+#             */
/*   Updated: 2024/04/09 13:46:31 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
                if (ft_isdigit(c) != 0)
                        printf("%c : is digit\n", c);
                else    
                        printf("%c : is not digit\n", c);
                c++;
        }
}*/

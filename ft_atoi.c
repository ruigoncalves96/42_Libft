/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:23:26 by randrade          #+#    #+#             */
/*   Updated: 2024/04/15 18:38:12 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	value;
	int	i;
	int	pos_neg;

	value = 0;
	i = 0;
	pos_neg = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pos_neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + str[i] - 48;
		i++;
	}
	return (value * pos_neg);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str = "  -12334"; 

	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
}*/

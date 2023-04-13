/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:33:27 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/13 13:00:31 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		s;
	long	n;

	i = 0;
	s = 1;
	while (str[i] == ' ' || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = str[i] - '0' + (n * 10);
		i++;
	}
	if (n > 2147483647 && s == 1)
		return (-1);
	else if (n < -2147483648 && s == -1)
		return (0);
	return ((int)(s * n));
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *result = "      +5445";
	printf("%d\n", atoi(result));
}
*/
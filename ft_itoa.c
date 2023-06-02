/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:23:57 by claatkin          #+#    #+#             */
/*   Updated: 2023/06/02 12:44:30 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countdigits(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_limit(char *newstring)
{
	newstring = malloc(12 * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	ft_strlcpy(newstring, "-2147483648", 12);
	return (newstring);
}

void	ft_recursive(int n, char *newstring, int i, long num)
{
	if (n >= 10)
		ft_recursive(n / 10, newstring, i - 1, num);
	newstring[i] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	int		counteddigits;
	long	num;
	char	*newstring;

	num = n;
	newstring = NULL;
	if (n == -2147483648)
	{
		newstring = ft_limit(newstring);
		return (newstring);
	}
	counteddigits = ft_countdigits(n);
	if (n < 0)
		n = n * -1;
	newstring = malloc((counteddigits + 2) * (sizeof(char)));
	if (newstring == NULL)
		return (NULL);
	ft_recursive(n, newstring, counteddigits, num);
	if (num < 0)
		newstring[0] = '-';
	newstring[counteddigits + 1] = '\0';
	return (newstring);
}

/*int	main(void)
{
	printf("%s ITOA", ft_itoa(-21545454));
	return (0);
}*/

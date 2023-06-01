/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:23:57 by claatkin          #+#    #+#             */
/*   Updated: 2023/06/01 17:20:22 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countdigits(int n)
{
	int	i;

	i = 0;
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

void	ft_recursive(int n, char *newstring, int i)
{
	printf("%d PATO\n", n);
	if (n >= 10)
	{
	printf("%d REC\n", n);
		ft_recursive(n / 10, newstring, i - 1);}
	newstring[i] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	int		counteddigits;
	char	*newstring;

	newstring = NULL;
	if (n == -2147483648)
	{
		newstring = ft_limit(newstring);
		return (newstring);
	}
	counteddigits = ft_countdigits(n);
	if (n < 0)
		counteddigits++;
	newstring = malloc(counteddigits * (sizeof(char)));
	if (newstring == NULL)
		return (NULL);
	if (n < 0)
	{
		//ft_putchar_fd('-', 1);
		n = n * -1;
		printf("%d AQUI\n", n);
	}
	if (n >= 0)
	{
		printf("%d N dentro rec\n", n);
		ft_recursive(n, newstring, counteddigits);
	}
	newstring[counteddigits + 1] = '\0';
	return (newstring);
}



int	main(void)
{
	printf("%s ITOA", ft_itoa(-2147483647));
	return (0);
}

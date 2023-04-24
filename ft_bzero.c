/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:21:39 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/24 15:35:58 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

/*#include <strings.h>
#include <stdio.h>

int	main(void)
{
	char s[10] = "hola";
	size_t n = 8;
	//printf("%zu\n", bzero(s, n));
    //printf("%zu\n", ft_bzero(s, n));
	printf("Before: %s", s);
	ft_bzero(s, n);
	printf("\nAfter: %s", s);
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:05:13 by claatkin          #+#    #+#             */
/*   Updated: 2023/05/10 15:44:22 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return (&((unsigned char *)s)[i]);
		}
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	size_t n = 8;
	printf("%s\n", memchr("hola", 'a', n));
    printf("%s\n", ft_memchr("hola", 'a', n));
	return (0);
}*/
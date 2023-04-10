/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:09:04 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/10 16:34:39 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i <= dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (*dst);
}

/*int	main(void)
{
	char dst [] = "adios";
	char src [] = "hola";
	size_t len = '4';
	
    printf("%d\n", ft_strlcpy(dst, src, len)); // what the actual fuck
}*/
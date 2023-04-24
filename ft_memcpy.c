/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:02:24 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/24 19:15:00 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (((unsigned char *)dst)[i] != '\0')
	{
		while ((((unsigned char *)dst)[i] != '\0') && (j < n))
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[j];
			j++;
		}
		i++;
	}
	((unsigned char *)dst)[i] = '\0';
	return (((unsigned char *)dst));
}

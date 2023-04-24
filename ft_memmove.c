/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:26:34 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/24 19:20:55 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (((unsigned char *)dst)[i] != '\0')
		i++;
	{
		while (((unsigned char *)dst)[i] != '\0' && j < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[j];
			j++;
		}
		i++;
	}
	((unsigned char *)dst)[i] = '\0';
	return (((unsigned char *)dst));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:02:53 by claatkin          #+#    #+#             */
/*   Updated: 2023/05/25 15:18:53 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char			*pointer;
	unsigned int	i;

	i = 0;
	pointer = malloc(count * size);
	if (pointer == NULL)
		return (NULL);
	while (i < (count * size))
	{
		pointer[i] = 0;
		i++;
	}
	return ((void *)pointer);
}

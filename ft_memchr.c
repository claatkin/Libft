/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:05:13 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/19 16:13:22 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && i > n)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		else
		{
			i++;
			n--;
		}
	}
	return (0);
}

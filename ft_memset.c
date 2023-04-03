/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:33:18 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/03 16:18:01 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0; // O i = len; ¿?
	while (str[i] != '\0' && i < len)
	{
		str[i] = c;
		i++;
		len--:
	}
	return (*str);
}

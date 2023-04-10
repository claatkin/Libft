/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:14:05 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/10 15:47:06 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t	i;

	i = 0;
	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	while ((c1[i] != '\0' || c2[i] != '\0') && i < n)
	{
		if (c1[i] == c2[i])
			i++;
		else if (c1[i] < c2[i])
			return (-1);
		else
			return (1);
	}
	return (0);
}

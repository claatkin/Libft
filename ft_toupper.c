/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:43:56 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/03 16:09:10 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_toupper(int c)
{
	int	i;

	i = 0;
	while (i != '\0')
	{
		if (c >= 'a' && c <= 'z')
			c -= 32;
		i++;
	}
	return (c);
}

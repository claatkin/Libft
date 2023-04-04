/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:06:16 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/04 17:13:59 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strchr(const char *s, int c)
{
	int	i;

	i = ???; // Think how do I get this info
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
	}
	else
		i--;
	return (0);
}

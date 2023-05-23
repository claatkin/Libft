/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:06:16 by claatkin          #+#    #+#             */
/*   Updated: 2023/05/22 12:59:40 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] != (char)c)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return (&((char *)s)[i]);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	printf("%s\n", strrchr(src, ' '));
    printf("%s\n", ft_strrchr(src, ' '));
}*/
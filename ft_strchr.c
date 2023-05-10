/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:46:59 by claatkin          #+#    #+#             */
/*   Updated: 2023/05/10 17:05:50 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return (&((char *)s)[i]);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf("%s\n", strchr("hola", 'a'));
    printf("%s\n", ft_strchr("hola", 'a'));
}*/
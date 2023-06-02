/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:09:04 by claatkin          #+#    #+#             */
/*   Updated: 2023/06/02 15:15:10 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	while ((i < (dstsize - 1)) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*#include <string.h>
int	main(void)
{
	char dst [5] = "";
	char src [5] = "hola";
	size_t len = 2;
	printf("%s %zu\n", dst, strlcpy(dst, src, len));
	*dst = 0;
    printf("%s %zu\n", dst, ft_strlcpy(dst, src, len));
}*/
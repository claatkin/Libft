/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:15:14 by claatkin          #+#    #+#             */
/*   Updated: 2023/05/23 16:00:42 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(dst);
	if (dstsize <= 0)
		return (ft_strlen(dst));
	if (len >= (int)dstsize)
		return (dstsize + ft_strlen(src));
	while (dst != NULL && dst[i] != '\0')
		i++;
	while (i < (int)dstsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i <= (int)dstsize)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}

#include <string.h>


/*int	main(void)
{
	char dst [20] = "mundo ";
	char src [5] = "hola";
	char mydst [20] = "mundo ";
	size_t len = 12;
	//char *org;
	//char *mine;
	
	//org = strlcat(dst, src, len);
	//mine = ft_strlcat(dst,src, len);
	
	printf("org %zu, %s\n", strlcat(dst, src, len), dst);
    printf("mine %zu, %s\n", ft_strlcat(mydst, src, len), mydst);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:15:14 by claatkin          #+#    #+#             */
/*   Updated: 2023/06/02 15:15:05 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(dst);
	if (len >= dstsize || dstsize == 0)
		return (dstsize + ft_strlen(src));
	while (dst != NULL && dst[i] != '\0')
		i++;
	while (i < dstsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i <= dstsize)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}

/*#include <string.h>


int	main(void)
{
	char dst [20] = "pqrstuvwxyz";
	char src [5] = "abcd";
	char mydst [20] = "pqrstuvwxyz";
	size_t len = -1;
	//char *org;
	//char *mine;
	
	//org = strlcat(dst, src, len);
	//mine = ft_strlcat(dst,src, len);
	
	printf("org %zu, %s\n", strlcat(dst, src, len), dst);
    printf("mine %zu, %s\n", ft_strlcat(dst, src, len), mydst);
}*/

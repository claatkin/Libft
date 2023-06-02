/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:31:53 by claatkin          #+#    #+#             */
/*   Updated: 2023/06/02 15:15:25 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*newfunction(void)
{
	char	*pointer;

	pointer = ft_calloc(1, 1);
	return (pointer);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;
	unsigned int	length;

	i = 0;
	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
	{
		s2 = ft_calloc(1, 1);
		return (s2);
	}
	if (len > ((length - start) + 1))
		len = length - start + 1;
	s2 = malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (i < len && s[start + i] != 0)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int	main(void)
{
	char string[6] = "holi";
	char *s2 = ft_substr(string, 1, 2);
	printf("%s", s2);
}*/
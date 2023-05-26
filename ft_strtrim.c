/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:17:27 by claatkin          #+#    #+#             */
/*   Updated: 2023/05/26 16:42:54 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstring;
	int		i;
	int		rightcut;
	int		leftcut;
	int		length;

	i = 0;
	leftcut = 0;
	if (set == NULL || s1 == NULL)
		return (NULL);
	length = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
	{
		i++;
		leftcut++;
	}
	i = length - 1;
	length = length - leftcut;
	rightcut = -1;
	while (i >= 0 && ft_strchr(set, s1[i]) != NULL)
	{
		i--;
		rightcut++;
	}
	length = length - rightcut;
	newstring = malloc(length * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	ft_strlcpy(newstring, (s1 + leftcut), length);
	return (newstring);
}

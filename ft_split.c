/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:13:38 by claatkin          #+#    #+#             */
/*   Updated: 2023/06/01 13:19:52 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countingwords(char const *s, char c)
{	
	int	words;
	int	flag;
	int	i;

	words = 0;
	flag = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && flag == 1)
			flag = 0;
		else if (s[i] != c && flag == 0)
		{
			flag = 1;
			words++;
		}
		i++;
	}
	return (words);
}

char	*addingwords(char const *s, char c, int *i)
{
	char	*word;
	int		length;

	length = 0;
	while (s[*i] == c)
		i++;
	while (s[length + *i] != '\0' && s[length + *i] != c)
		length++;
	if (length == 0)
		return (NULL);
	word = malloc((length + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	ft_strlcpy(word, (char *)s + *i, length + 1);
	*i += length;
	return (word);
}

void	cleaningtable(char **table)
{
	int	i;

	i = 0;
	while (table[i])
	{
		free(table[i]);
		i++;
	}
	free (table);
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	words = countingwords(s, c);
	table = ft_calloc(words + 1, sizeof(char *));
	if (table == NULL)
		return (NULL);
	while (j < words)
	{
		table[j] = addingwords(s, c, &i);
		if (table[j] == NULL && s[i] != '\0')
		{
			cleaningtable(table);
			return (NULL);
		}
		j++;
	}
	return (table);
}

/*#include <stdio.h>

int main(void)
{
	char **table = ft_split("Holi caracoli", ' ');
	int i = 0;
	while (table[i] != NULL)
	{
		printf("%s", table[i]);
		i++;
	}
	return (0);
}*/

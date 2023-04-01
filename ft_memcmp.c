/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:01:24 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/21 14:01:27 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(char *s1, char *s2, int n)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        while (s2[j] != '\0' && j < n)
        {
            if (s1[i] != s2[j])
                //return (s1[i] - s2[j]);
                return (1);
            j++;
        }
        i++;
        n--;
    }
    return (0);
}

// SEGUIR PENSANDO -- todo mal

int main (void)
{
        int result;
        result = ft_memcmp("abc", "abc", 2);
        printf("%d\n", result);
        result = ft_memcmp("abc", "abc", 2);
        printf("%d\n", result);
        result = ft_memcmp("aBc", "abc", 2);
        printf("%d\n", result);
        result = ft_memcmp("abc", "abC", 2);
        printf("%d\n", result);
        result = ft_memcmp("abk", "aBc", 2);
        printf("%d\n", result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:14:05 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/17 18:14:32 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        unsigned int    i;

        i = 0;
        while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
        {
                if (s1[i] == s2[i])
                        i++;
                else if (s1[i] < s2[i])
                        return (-1);
                else
                        return (1);
        }
        return (0);
}

//MIRAD y ver qué deberia dar cada cosa

/*int main (void)
{
        int result;
        result = ft_strncmp("abc", "abc", 2);
        printf("%d\n", result);
        result = ft_strncmp("abC", "abc", 2);
        printf("%d\n", result);
        result = ft_strncmp("aBc", "abc", 2);
        printf("%d\n", result);
        result = ft_strncmp("abc", "abC", 2);
        printf("%d\n", result);
        result = ft_strncmp("abc", "aBc", 2);
        printf("%d\n", result);
}*/
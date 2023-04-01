/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:21:39 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/20 16:21:44 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_bzero(char *s, int n)
{
    int i;

    i = 0;
    if (n != 0)
    {
        while (s[i] != '\0' && i > n)
        {
            s[i] = 0;
            i++;
        }
    }
    return (s);
}

// This is clearly wrong, think about this one more

int main(void)
{
    int result;
    result = *ft_bzero("holi", 0);
    printf("%d\n", result);
    result = *ft_bzero("hola", 2);
    printf("%d\n", result);
    result = *ft_bzero("hola123hola", 8);
    printf("%d\n", result);
    result = *ft_bzero("123", 2);
    printf("%d\n", result);
    result = *ft_bzero("123h", 3);
    printf("%d\n", result);
}
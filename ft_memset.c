/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:33:18 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/20 15:33:28 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b. The memset() function returns its first 
     argument.*/

char ft_memset(char *str, unsigned char c, size_t len)
{
    size_t  i;

    i = 0; // O i = len; ¿?
    while (str[i] != '\0' && i < len)
    {
        str[i] = c;
        i++;
        len--:
    }
    return (*str);
}

// PREGUNTAR

int main(void)
{
    int result;
    result = ft_memset("abcabcabc", ".", 2);
}
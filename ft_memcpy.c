/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:02:24 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/24 12:02:26 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* The memcpy() function copies n bytes from memory area src to memory area
     dst.  If dst and src overlap, behavior is undefined.  Applications in
     which dst and src might overlap should use memmove(3) instead. 
     The memcpy() function returns the original value of dst.*/

char ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i] != '\0')
    {
        while (dst[i] != '\0' && j < n)
        {
            dst[i] = src[j];
            j++;
            n--;
        }
        i++;
    }
    dst[i] = '\0'; 
    return (*dst);
}

// Preguntar por estos errores

int main()
{
        char src[] = "Hello there, Venus";
        char dest[] = "";
        int r = 5;
        ft_memcpy(dest, src, r);
        printf("Copied '%s' into '%s', length %d\n", src, dest, r);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:26:34 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/25 12:26:38 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* The memmove() function copies len bytes from string src to string dst.
     The two strings may overlap; the copy is always done in a non-destructive
     manner.
     The memmove() function returns the original value of dst.*/

char ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i] != '\0')
        i++;
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
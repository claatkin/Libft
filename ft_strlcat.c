/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:15:14 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/20 17:15:16 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlcat(char *dest, char *src, int destsize)
{
        int     i;
        int     j;

        i = 0;
        j = 0;
        while (dest[i] != '\0')
                i++;
        while (src[j] != '\0' && destsize >= j)
        {
                dest[i] = src[j];
                i++;
                j++;
                destsize--;
        }
        dest[i] = '\0';
        return (dest);
}

//PENSAR ESTE UN POCO MÁS

int main()
{
        char src[] = "mundo";
        char dest[] = "Hola ";
        printf("%s", ft_strlcat(dest, src, 3));
}
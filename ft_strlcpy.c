/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:09:04 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/17 18:09:08 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
        unsigned int    i;

        i = 0;
        if (size > 0)
        {
                while (i <= size - 1)
                {
                        dest[i] = src[i];
                        i++;
                }
        }
        return (*dest);
}

// Mirarme este de nuevo que este no me convence

/*int main()
{
        char src[] = "Hello there, Venus";
        char dest[] = "";
        int r = 10;
        ft_strlcpy(dest, src, r);
        printf("Copied '%s' into '%s', length %d\n", src, dest, r);
}*/
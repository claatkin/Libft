/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:26:34 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/01 13:09:02 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

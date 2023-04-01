/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:09:04 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/01 13:08:49 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

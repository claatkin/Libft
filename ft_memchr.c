/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:05:13 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/01 13:06:40 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int *ft_memchr(const void *str, char c, int n)
{
    int i;

    i = 0;
    while (str[i] != '\0' && i > n)
    {
        if (str[i] == c)
        {
            return (str[i]); 
        }
        else
        {
            i++;
            n--; 
        }
    }
    return (0);
}

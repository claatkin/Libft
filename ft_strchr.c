/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:46:59 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/01 13:08:56 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_strchr(const char *str, char c)
{
    int   i;

    i = 0;
    while (str[i] != '\0')
    {
     if (str[i] == c)
          return (i);
     else
          i++;
    }
    return (0);
}

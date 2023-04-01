/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:33:27 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/01 13:25:56 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
    int i;
    int s;
    int n;

    i = 0;
    s = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while ((str[i] == '-' || str[i == '+']) && str[i] != '\0')
    {
        if (str[i] == '-')
            s = s * -1;
        i++;
    }
    n = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = str[i] - '0' + (n * 10);
        i++;
    }
    return (s * n);
}

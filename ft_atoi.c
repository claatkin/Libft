/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:33:27 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/17 18:33:31 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
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

// Check if this is correct
/*int main(void)
{
    printf("%i\n", ft_atoi("        ---+--+1234ab567"));
    return 0;
}*/
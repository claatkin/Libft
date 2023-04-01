/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:03:29 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/17 17:03:32 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0')
        return (1);
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}

/*int   main()
{
    int result;
    result= ft_isdigit("");
    printf("%d\n", result);
    result= ft_isdigit("hola");
    printf("%d\n", result);
    result= ft_isdigit("hola123hola");
    printf("%d\n", result);
    result= ft_isdigit("123");
    printf("%d\n", result);
    result= ft_isdigit("123h");
    printf("%d\n", result);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:42:21 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/20 13:42:24 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0')
        return (1);
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z')
            || (str[i] >= 'A' && str[i] <= 'Z')
            || (str[i] >= '0' && str[i] <= '9'))
            i++;
        else
            return (0);
    }
    return (1);
}

/*int   main()
{
    int result;
    result= ft_isalnum("");
    printf("%d\n", result);
    result= ft_isalnum("hola");
    printf("%d\n", result);
    result= ft_isalnum("hola123hola");
    printf("%d\n", result);
    result= ft_isalnum("123");
    printf("%d\n", result);
    result= ft_isalnum("123h");
    printf("%d\n", result);
    result= ft_isalnum("1ú3");
    printf("%d\n", result);
    result= ft_isalnum("12óh");
    printf("%d\n", result);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:49:06 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/20 14:49:14 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0')
        return (1);
    while (str[i] != '\0')
    {
        if ((str[i] >= 0 && str[i] <= 127) //Pedir ayuda para este
            || (str[i] >= 'A' && str[i] <= 'Z'))
            i++;
        else
            return (0);
    }
    return (1);
}

int   main()
{
    int result;
    result= ft_isalpha("");
    printf("%d\n", result);
    result= ft_isalpha("hola");
    printf("%d\n", result);
    result= ft_isalpha("hola123hola");
    printf("%d\n", result);
    result= ft_isalpha("123");
    printf("%d\n", result);
    result= ft_isalpha("123h");
    printf("%d\n", result);
}
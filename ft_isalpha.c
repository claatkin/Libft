/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:53:33 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/07 17:53:39 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0')
        return (1);
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z')
            || (str[i] >= 'A' && str[i] <= 'Z'))
            i++;
        else
            return (0);
    }
    return (1);
}

/*int   main()
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
}*/
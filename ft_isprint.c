/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:32:02 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/17 17:32:08 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isprint(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0')
        return (1);
    while (str[i] != '\0')
    {
        if ((str[i] >= 32 && str[i] < 127))
            i++;
        else
            return (0);
    }
    return (1);
}

/*int   main()
{
    int result;
    result= ft_isprint("");
    printf("%d\n", result);
    result= ft_isprint("hola");
    printf("%d\n", result);
    result= ft_isprint("hola123hola");
    printf("%d\n", result);
    result= ft_isprint("ú");
    printf("%d\n", result);
    result= ft_isprint("1óh");
    printf("%d\n", result);
}*/
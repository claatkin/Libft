/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:03:29 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/10 16:49:36 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int   main()
{
    int result;
    result= ft_isdigit('j');
    printf("%d\n", result);
    result= ft_isdigit('p');
    printf("%d\n", result);
    result= ft_isdigit('6');
    printf("%d\n", result);
    result= ft_isdigit('3');
    printf("%d\n", result);
}*/
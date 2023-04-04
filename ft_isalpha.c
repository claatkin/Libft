/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:53:33 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/04 17:36:32 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/* YA SE VERÁ CÓMO HACER EL MAIN
int	main(void)
{
    int result;
    result= ft_isprint("");
    printf("%d\n", result);
    result= ft_isprint("h");
    printf("%d\n", result);
    result= ft_isprint("5");
    printf("%d\n", result);
    result= ft_isprint("u");
    printf("%d\n", result);
    result= ft_isprint("8");
    printf("%d\n", result);
}*/

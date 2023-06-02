/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:42:21 by claatkin          #+#    #+#             */
/*   Updated: 2023/06/02 15:10:40 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}

/*int   main()
{
    int result;
    result= ft_isalnum('h');
    printf("%d\n", result);
    result= ft_isalnum('P');
    printf("%d\n", result);
    result= ft_isalnum('3');
    printf("%d\n", result);
    result= ft_isalnum('o');
    printf("%d\n", result);
}*/
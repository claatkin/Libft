/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:53:33 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/03 15:46:09 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	i;

	i = 0;
	while (i != '\0')
	{
		if ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
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
}

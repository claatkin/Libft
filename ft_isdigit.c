/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:03:29 by claatkin          #+#    #+#             */
/*   Updated: 2023/04/03 15:51:31 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	i;

	i = 0;
	while (i != '\0')
	{
		if (c >= '0' && c <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	int	result;

	result = ft_isprint("8");
	printf("%d\n", result);
}

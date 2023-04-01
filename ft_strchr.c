/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:46:59 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/25 12:47:03 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the func-
     tions locate the terminating `\0'. The function strchr() returns a pointer 
     to the located character, or NULL if the character does not appear in the string.*/

char ft_strchr(const char *str, char c)
{
    int   i;

    i = 0;
    while (str[i] != '\0')
    {
     if (str[i] == c)
          return (i);
     else
          i++;
    }
    return (0);
}

// Preguntar

int  main(void)
{
     int result;
     result = ft_strchr("abc", "a");
     printf("%d\n", result);
}
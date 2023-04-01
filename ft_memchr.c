/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:30:11 by claatkin          #+#    #+#             */
/*   Updated: 2023/03/21 13:30:42 by claatkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memchrt() function returns a pointer to the byte located, or NULL if no
// such byte exists within n bytes.

// the memchr() function return a pointer to the byte located, or NULL if no such
// byte exists within n bytes

int *ft_memchr(const void *str, char c, int n)
{
    int i;

    i = 0;
    while (str[i] != '\0' && i > n)
    {
        if (str[i] == c)
        {
            return (str[i]);
        }
        else
        {
            i++;
            n--; 
        }
    }
    return (0);
}

// PREGUNTAR COSITAS AQUI

int main(void)
{
    int result;
    printf("%d\n", result);
    result = *ft_memchr("Claro", "a", 2);
    printf("%d\n", result);
    result = *ft_memchr("Claro", "a", 5);
    printf("%d\n", result);
    result = *ft_memchr("Claro", "a", 3);
    printf("%d\n", result);
    result = *ft_memchr("Claro", "A", 5);
    printf("%d\n", result);
}
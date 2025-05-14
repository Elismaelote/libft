/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:34:02 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/14 20:22:41 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sig;
	int	i;

	num = 0;
	sig = 1;
	i = 0;
	while (str[i] == '\f' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sig = -1;
		i++;
	}
	else if (str[i] == '+' && sig == 1)
		i++;
	else if (str[i] == '+' || str[i] == '-')
		return (num);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sig);
}
/*#include <stdio.h>      // Para printf


int main(void)
{
    // Probamos con varios ejemplos
    const char *str1 = "42";
    const char *str2 = "   -123";
    const char *str3 = "\t\n  +567";
    const char *str4 = "abc";
    const char *str5 = "--42";
    const char *str6 = "2147483647";     // Máximo valor int
    const char *str7 = "-2147483648";    // Mínimo valor int

    printf("'%s' -> %d\n", str1, ft_atoi(str1));
    printf("'%s' -> %d\n", str2, ft_atoi(str2));
    printf("'%s' -> %d\n", str3, ft_atoi(str3));
    printf("'%s' -> %d\n", str4, ft_atoi(str4));
    printf("'%s' -> %d\n", str5, ft_atoi(str5));
    printf("'%s' -> %d\n", str6, ft_atoi(str6));
    printf("'%s' -> %d\n", str7, ft_atoi(str7));

    return 0;
}*/

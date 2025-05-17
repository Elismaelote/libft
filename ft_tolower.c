/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:22:58 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 19:28:02 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*#include <stdio.h>

int main(void)
{
    char c1 = 'A';
    char c2 = 'z';
    char c3 = '5';
    char c4 = '?';

    printf("Original: %c -> tolower: %c\n", c1, ft_tolower(c1)); // A -> a
    printf("Original: %c -> tolower: %c\n", c2, ft_tolower(c2)); // z -> z 
    printf("Original: %c -> tolower: %c\n", c3, ft_tolower(c3)); // 5 -> 5 
    printf("Original: %c -> tolower: %c\n", c4, ft_tolower(c4)); // ? -> ?

    return 0;
}*/
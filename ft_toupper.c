/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:23:05 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 18:02:59 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*#include <stdio.h>

int main()
{
	printf("%c\n", ft_toupper('a')); // Imprime: A
	printf("%c\n", ft_toupper('z')); // Imprime: Z
	printf("%c\n", ft_toupper('B')); // Imprime: B (ya es mayúscula)
	printf("%c\n", ft_toupper('1')); // Imprime: 1 (no es letra)
	return 0;
}*/

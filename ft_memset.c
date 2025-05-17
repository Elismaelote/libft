/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:19:30 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 16:06:22 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ps;
	size_t			i;

	i = 0;
	ps = (unsigned char *)s;
	while (i < n)
	{
		ps[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>

int main()
{
    char mensaje[20] = "Hola Mundo";
    
    printf("Antes: %s\n", mensaje);

    // Llenamos los 5 primeros caracteres con '*'
    ft_memset(mensaje, '*', 5);

    printf("Después: %s\n", mensaje);

    return 0;
}*/

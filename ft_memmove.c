/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:19:24 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 18:46:06 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	size_t				i;

	if (!src && !dest)
		return (NULL);
	pdest = (unsigned char *) dest;
	psrc = (const unsigned char *) src;
	if (pdest > psrc)
	{
		i = n;
		while (i > 0)
		{
			i--;
			pdest[i] = psrc[i];
		}
	}
	else
		ft_memcpy(pdest, psrc, n);
	return (dest);
}
/*#include <stdio.h>

int main(void)
{
    char str1[20] = "1234567890";
    
    // Caso 1: copiar con solapamiento, destino dentro del buffer, hacia adelante
    printf("Antes ft_memmove: %s\n", str1);
    ft_memmove(str1 + 4, str1, 6);  // Copiar "123456" a partir de str1+4
    printf("Después ft_memmove (solapamiento): %s\n", str1);
    
    // Caso 2: copiar sin solapamiento
    char src[] = "Hola Mundo";
    char dest[20];
    ft_memmove(dest, src, ft_strlen(src) + 1);
    printf("Copiado sin solapamiento: %s\n", dest);
    
    return 0;
}*/
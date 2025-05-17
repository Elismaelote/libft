/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:19:18 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 18:48:05 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	size_t				i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

int main(void)
{
	char src[] = "Hola mundo";
	char dest[20];

	// Usamos ft_memcpy para copiar la cadena src en dest
	ft_memcpy(dest, src, ft_strlen(src) + 1);  // +1 para copiar también el '\0'

	printf("Cadena origen: %s\n", src);
	printf("Cadena destino después de ft_memcpy: %s\n", dest);

	return 0;
}*/
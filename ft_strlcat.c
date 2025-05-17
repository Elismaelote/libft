/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:22:00 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 19:26:08 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;	

	if (size == 0 && (!dest || !src))
		return (0);
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (size <= lendest)
		return (lensrc + size);
	i = 0;
	while (src[i] != '\0' && (lendest + i) < size - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	if (size)
		dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
/*#include <stdio.h>

int main(void)
{
	char buffer[20] = "Hola, ";
	const char *texto = "mundo!";

	size_t resultado = ft_strlcat(buffer, texto, sizeof(buffer));

	printf("Resultado: %zu\n", resultado);
	printf("Cadena concatenada: '%s'\n", buffer);

	// Probamos con un tamaño más pequeño para ver truncamiento
	char buffer2[10] = "Hola, ";
	resultado = ft_strlcat(buffer2, texto, sizeof(buffer2));

	printf("Resultado truncado: %zu\n", resultado);
	printf("Cadena truncada: '%s'\n", buffer2);

	return 0;
}*/
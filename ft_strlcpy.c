/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:22:07 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 17:44:07 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	if (size == 0)
		return (counter);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (counter);
}
/*#include <stdio.h>

int main(void)
{
	char src[] = "Hola, mundo";
	char dest[10];  // buffer pequeño para demostrar truncamiento
	size_t ret;

	ret = ft_strlcpy(dest, src, sizeof(dest));

	printf("Cadena copiada: '%s'\n", dest);
	printf("Longitud de src: %zu\n", ret);

	if (ret >= sizeof(dest))
		printf("¡Advertencia! La cadena fue truncada.\n");
	else
		printf("La cadena fue copiada completamente.\n");

	return 0;
}*/
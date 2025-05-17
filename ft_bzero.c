/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:37:20 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 16:46:43 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ps;
	size_t			i;

	i = 0;
	ps = (unsigned char *)s;
	while (i < n)
	{
		ps[i] = 0;
		i++;
	}
}
/*#include <stdio.h>

int	main(void)
{
	char mensaje[6] = "Hola!";

	printf("Antes: %s\n", mensaje);

	// Borramos los 3 primeros caracteres
	ft_bzero(mensaje, 3);

	// Al imprimir, el string se cortará en el primer \0
	//printf("Después: %s\n", mensaje);

	for (int i = 0; i < 6; i++)
	printf("mensaje[%d] = %d (%c)\n", i, mensaje[i], mensaje[i]);


	return 0;
}*/
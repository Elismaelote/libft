/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:22:18 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 15:52:33 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>  // Para printf

int	main(void)
{
	const char *texto1 = "Hola mundo";
	const char *texto2 = "";
	const char *texto3 = "42Madrid";

	printf("Longitud de '%s': %zu\n", texto1, ft_strlen(texto1));
	printf("Longitud de '%s': %zu\n", texto2, ft_strlen(texto2));
	printf("Longitud de '%s': %zu\n", texto3, ft_strlen(texto3));

	return (0);
}*/

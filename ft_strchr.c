/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:20:40 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 18:29:46 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	pc;
	char			*ps;
	int				i;

	i = 0;
	pc = (unsigned char)c;
	ps = (char *)s;
	while (s[i] != '\0')
	{
		if (ps[i] == pc)
			return (&ps[i]);
		i++;
	}
	if (pc == '\0' && ps[i] == '\0')
		return (&ps[i]);
	return (NULL);
}
/*#include <stdio.h>
int main(void)
{
	const char *texto = "Hola mundo";
	char *resultado;

	resultado = ft_strchr(texto, 'm');
	if (resultado)
		printf("Encontrado: %s\n", resultado);
	else
		printf("No encontrado\n");

	return 0;
}*/
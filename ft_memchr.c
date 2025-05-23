/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:19:02 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/19 14:40:56 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*ps;
	unsigned char			find;

	i = 0;
	ps = (const unsigned char *)s;
	find = (unsigned char)c;
	while (i < n)
	{
		if (ps[i] == find)
			return ((void *)&ps[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int main(void)
{
	char texto[] = "Hola";
	char *resultado = ft_memchr(texto, 's', 4);

	if (resultado)
		printf("%c\n", *resultado);
	else
		printf("No\n");

	return 0;
}*/
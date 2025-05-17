/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:18:26 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 13:55:29 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
/*#include <stdio.h>

int	ft_isprint(int c);

int main(void)
{
	char *c = "ç";

	if (ft_isprint((unsigned char)*c))
		printf("El caracter '%c' es imprimible.\n", *c);
	else
		printf("El caracter '%c' no es imprimible.\n", *c);

	return 0;
}*/
/*#include <stdio.h>

int	ft_isprint(int c);

int main(void)
{
	char c = 'h';

	if (ft_isprint(c))
		printf("El caracter '%c' es imprimible.\n", c);
	else
		printf("El caracter '%c' no es imprimible.\n", c);

	return 0;
}*/
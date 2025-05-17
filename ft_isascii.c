/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:18:14 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 13:37:07 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>

int main(void)
{
	const char *input = "Ñ";           // cadena de texto (UTF-8)
	unsigned char c = (unsigned char)input[0];  // primer byte

	if (ft_isascii(c))
		printf("'%c' es ASCII.\n", c);
	else
		printf("'%c' no es ASCII.\n", c);

	return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:17:43 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 13:07:22 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*#include <stdio.h>

int main(void)
{
	char c = '@';

    if (ft_isalnum(c))
        printf("'%c' es un caracter alfanumérico.\n", c);
    else
        printf("'%c' no es un caracter alfanumérico.\n", c);

    return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:17:16 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 13:03:17 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*#include <stdio.h>

int main(void)
{
	int c = '1';

    if (ft_isalpha(c))
        printf("'%c' es un caracter alfabético.\n", c);
    else
        printf("'%c' no es un caracter alfabético.\n", c);

    return 0;
}*/
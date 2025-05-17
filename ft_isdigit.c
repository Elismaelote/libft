/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:18:19 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 12:56:17 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

#include <stdio.h>

int main(void)
{
	char c = '7';

    if (ft_isdigit(c))
        printf("'%c' es un dígito.\n", c);
    else
        printf("'%c' no es un dígito.\n", c);

    return 0;
}
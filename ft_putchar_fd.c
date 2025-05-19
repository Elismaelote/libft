/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:19:36 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/19 16:41:40 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <stdio.h>
int main(void)
{
    // Escribe 'A' en la salida estándar (pantalla)
    ft_putchar_fd('A', 1);

    // Escribe un salto de línea en la salida estándar
    ft_putchar_fd('\n', 1);

    return 0;
}*/
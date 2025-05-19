/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:19:11 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/19 14:46:05 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*ps1;
	unsigned const char	*ps2;
	size_t				i;

	i = 0;
	ps1 = (unsigned const char *)s1;
	ps2 = (unsigned const char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return ((int)(ps1[i] - ps2[i]));
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char str1[] = "Hola";
	char str2[] = "Holb";

	printf("%d\n", ft_memcmp(str1, str2, 4));

	return 0;
}*/
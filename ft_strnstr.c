/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:22:34 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/19 14:56:22 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!str || !to_find) && !n)
		return (NULL);
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0' && ((i + j) < n))
			j++;
		if (to_find[j] == '\0')
			return ((char *) &str[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int main()
{
	char *resultado = ft_strnstr("hola mundo", "mun", 10);
	printf("%s\n", resultado);
	return 0;
}*/
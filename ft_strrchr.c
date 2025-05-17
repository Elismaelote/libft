/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:22:40 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/17 19:27:32 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
/*#include <stdio.h>

int main()
{
    const char *str = "hola mundo";
    char c = 'n';

    char *res = ft_strrchr(str, c);
    if (res)
        printf("Encontrado '%c' en: %s\n", c, res);
    else
        printf("No se encontró '%c'\n", c);

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:20:46 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/19 15:23:11 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ps;
	size_t	i;
	size_t	len;

	len = ft_strlen(str);
	ps = malloc(len + 1);
	if (ps == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ps[i] = str[i];
		i++;
	}
	ps[i] = '\0';
	return (ps);
}
/*#include <stdio.h>

int main(void)
{
    char *copia = ft_strdup("Hola mundo");
    printf("%s\n", copia);
    return 0;
}*/
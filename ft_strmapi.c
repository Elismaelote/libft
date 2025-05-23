/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:22:23 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/19 16:28:01 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*newstrs;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	newstrs = (char *)malloc(len + 1);
	if (newstrs == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		newstrs[i] = f(i, s[i]);
		i++;
	}
	newstrs[len] = '\0';
	return (newstrs);
}
/*#include <stdio.h>
char ft_toupper_custom(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}
int main(void)
{
	const char *str = "hola mundo";
	char *result = ft_strmapi(str, ft_toupper_custom);

	printf("%s\n", result);

	free(result);
	return 0;
}*/
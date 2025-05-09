/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:21:00 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/09 12:22:48 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(len + 1);
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (s1[i++] != '\0')
		s3[i - 1] = s1[i - 1];
	j = 0;
	while (s2[j] != '\0')
	{
		s3[i - 1 + j] = s2[j];
		j++;
	}
	s3[i - 1 + j] = '\0';
	return (s3);
}

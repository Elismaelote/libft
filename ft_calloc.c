/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 12:19:18 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/19 15:16:24 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t numele, size_t n)
{
	unsigned char	*p;
	size_t			total_size;

	if (n != 0 && numele >= SIZE_MAX / n)
		return (NULL);
	total_size = numele * n;
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, total_size);
	return (p);
}
/*#include <stdio.h>

int main(void)
{
    int *arr = ft_calloc(3, sizeof(int));

    printf("%d %d %d\n", arr[0], arr[1], arr[2]);

    free(arr);
    return 0;
}*/
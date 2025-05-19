/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu <isanz-mu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 22:18:35 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/19 16:12:59 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_countnum(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
	{
		count++;
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	ft_putstrnum(char n, char *strnum, size_t i)
{
	strnum[i] = n;
}

static char	*ft_putn(int n, char *strnum, size_t num)
{
	if (n <= 9 && n >= 0)
	{
		ft_putstrnum((n % 10 + '0'), strnum, num);
		return (strnum);
	}
	else
	{
		ft_putn((n / 10), strnum, num - 1);
		ft_putstrnum((n % 10 + '0'), strnum, num);
	}
	strnum[num + 1] = '\0';
	return (strnum);
}

char	*ft_itoa(int n)
{
	char		*strnum;
	size_t		num;

	if (n == INT_MIN)
	{
		strnum = ft_strdup("-2147483648");
		if (strnum == NULL)
			return (NULL);
		return (strnum);
	}
	num = ft_countnum(n);
	strnum = (char *)malloc(num + 1);
	if (strnum == NULL)
		return (NULL);
	if (n < 0)
	{
		ft_putstrnum('-', strnum, 0);
		n = -n;
	}
	ft_putn(n, strnum, num - 1);
	strnum[num] = '\0';
	return (strnum);
}
/*#include <stdio.h>

int main(void)
{
    int n = 1234;
    char *str = ft_itoa(n);

    printf("%s\n", str);

    free(str);
    return 0;
}*/
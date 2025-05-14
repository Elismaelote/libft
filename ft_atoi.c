/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isanz-mu < isanz-mu@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:34:02 by isanz-mu          #+#    #+#             */
/*   Updated: 2025/05/14 19:49:57 by isanz-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sig;
	int	i;

	num = 0;
	sig = 1;
	i = 0;
	while (str[i] == '\f' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sig = -1;
		i++;
	}
	else if (str[i] == '+' && sig == 1)
		i++;
	else if (str[i] == '+' || str[i] == '-')
		return (num);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sig);
}

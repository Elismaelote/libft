
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

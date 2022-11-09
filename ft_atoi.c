#include "libft.h"

int	    ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	num = 0;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	sign = 1;
	if(*nptr == '-') 
		sign = -1;
	if(*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		num *= 10;
		num += *nptr - '0';
		nptr++;
	}
	return (num * sign);
}


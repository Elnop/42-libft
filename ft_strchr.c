#include "libft.h"

char 	*ft_strchr(char *s, int c)
{
	while (*s && *s != c)
		s++;
	if(!*s)
		return (NULL);
	return (*s);
}
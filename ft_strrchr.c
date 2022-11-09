#include "libft.h"

char 	*ft_strchr(char *s, int c)
{
	unsigned	i;

	while (s[i])
		i++;
	while (i > 0 && s[i] != c)
		i--;
	if(!i)
		return (NULL);
	return (s + i);
}
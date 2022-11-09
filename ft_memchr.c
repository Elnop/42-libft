#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char value;
	size_t		i;

	str = (unsigned char)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n && str[i] && str[i] != value)
		i++;
	if (str[i] == value)
		return (s + i);
	return (NULL);
}
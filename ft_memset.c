#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (((unsigned char *)s)[n])
	{
		n--;
		((unsigned char *)s)[n] = (unsigned char)c;
	}
	return (s);
}
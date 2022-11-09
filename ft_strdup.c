#include "libft.h"

char    *ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	dup = malloc(ft_strlen((char *)s) * sizeof(char));
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

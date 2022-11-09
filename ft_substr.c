#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*sub;
	int		i;

	if(!(sub = malloc((len + 1) * sizeof(char))))
		return (NULL);
	s += start;
	while (i < len && s[i])
	{
		sub[i] = s[i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
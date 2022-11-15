/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:31:01 by lperroti          #+#    #+#             */
/*   Updated: 2022/11/15 05:00:42 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	size_t	i;

	if (*s == c)
		return ((char *)s);
	i = 0;
	while (s[i])
	{
		i++;
		if (s[i] == c)
			return ((char *)s + i);
	}
	return (NULL);
}

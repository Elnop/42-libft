/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:29:04 by lperroti          #+#    #+#             */
/*   Updated: 2022/11/14 02:12:33 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	value;
	size_t			i;

	str = (unsigned char *)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n && str[i] && str[i] != value)
		i++;
	if (str[i] == value)
		return (void *)(s + i);
	return (NULL);
}

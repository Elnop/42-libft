/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:31:39 by lperroti          #+#    #+#             */
/*   Updated: 2022/11/16 01:15:25 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;
	if ((!dst || !src) && size == 0)
		return (0);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen + 1)
		return (srclen + size);
	while (*dst)
		dst++;
	if (dstlen + srclen + 1 < size)
		size = dstlen + srclen + 1;
	i = 0;
	while (dstlen + i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dstlen + srclen);
}

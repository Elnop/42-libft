/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 03:45:15 by lperroti          #+#    #+#             */
/*   Updated: 2022/11/08 05:56:09 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;

	while (len > 0 && *big)
	{
		i = 0;
		while (i < len && little[i] == big[i])
			i++;
		if (!little[i])
			return (big);
		big++;
		len--;
	}
	return (NULL);
}


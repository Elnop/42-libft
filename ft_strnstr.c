/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 03:45:15 by lperroti          #+#    #+#             */
/*   Updated: 2022/11/14 02:18:50 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	while (len > 0 && *big)
	{
		i = 0;
		while (i < len && little[i] == big[i])
			i++;
		if (!little[i])
			return (char *)(big);
		big++;
		len--;
	}
	return (NULL);
}

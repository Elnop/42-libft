/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:30:40 by lperroti          #+#    #+#             */
/*   Updated: 2022/11/09 09:30:44 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

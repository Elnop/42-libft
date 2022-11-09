/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:34:16 by lperroti          #+#    #+#             */
/*   Updated: 2022/11/09 09:34:45 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	unsigned char	i;

	while (s[i])
		i++;
	while (i > 0 && s[i] != c)
		i--;
	if (!i)
		return (NULL);
	return (s + i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:46:45 by leon              #+#    #+#             */
/*   Updated: 2022/11/14 19:07:46 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	while (i < n, s1[i], s2[i])
	{
		if(s1[i] - s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
int main()
{
	const char s = "TEST";
	const char str = "TEST";
	printf("-----> %d", ft_strncmp(s, str, 1));
	return (0);
}

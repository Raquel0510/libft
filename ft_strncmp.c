/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:23:48 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/23 16:30:48 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The C library function int strncmp(const char *str1, const char *str2, size_t n) 
compares at most the first n bytes of str1 and str2.
*/

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)str1)[i] == ((unsigned char *)str2)[i])
	{
		if (i == n - 1)
			return (0);
		i ++;
	}
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}

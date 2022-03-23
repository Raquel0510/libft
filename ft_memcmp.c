/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:47:52 by rneves-c          #+#    #+#             */
/*   Updated: 2022/02/19 18:47:52 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The C library function int memcmp(const void *str1, const void *str2, size_t n)) 
compares the first n bytes of memory area str1 and memory area str2.
*/

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str1)[i] == ((unsigned char *)str2)[i])
			i ++;
		else
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
	}
	return (0);
}

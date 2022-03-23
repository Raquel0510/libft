/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:59:35 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/03 19:12:01 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The C library function void *memset(void *str, int c, size_t n) 
copies the character c (an unsigned char) to the first n 
characters of the string pointed to, by the argument str.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i ++;
	}
	return (str);
}

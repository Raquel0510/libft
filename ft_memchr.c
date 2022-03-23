/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:21:05 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/23 16:25:20 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The C library function void *memchr(const void *str, int c, size_t n) 
searches for the first occurrence of the character c (an unsigned char)
in the first n bytes of the string pointed to, by the argument str.
*/

#include "libft.h"
/*
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	if (!s)
		return (NULL);
	while (*s && n > 0)
	{
		if (*s == c)
			return (s);
		s ++;
		n --;
	}
	return (NULL);
}
*/
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)str;
	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

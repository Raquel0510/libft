/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:09:12 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/23 16:29:14 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The C library function char *strchr(const char *str, int c) 
searches for the first occurrence of the character c 
(an unsigned char) in the string pointed to by the argument str.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	c = c % 256;
	while (*str != c && *str != '\0')
		str ++;
	if (*str == c)
		return ((char *)str);
	return (NULL);
}

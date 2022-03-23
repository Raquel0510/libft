/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:59:32 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/23 16:28:19 by mfreixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The C library function char *strrchr(const char *str, int c) 
searches for the last occurrence of the character c (an 
unsigned char) in the string pointed to, by the argument str.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*save;

	c = c % 256;
	save = NULL;
	while (*str != '\0')
	{
		if (*str == c)
			save = (char *)str;
		str ++;
	}
	if (c == '\0')
		return ((char *)str);
	return (save);
}

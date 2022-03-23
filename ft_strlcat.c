/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:30:04 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/06 18:48:53 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcat() function appends the NUL-terminated string src 
to the end of dst. It will append at most size - strlen(dst) 
- 1 bytes, NUL-terminating the result.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	dest_in;
	size_t	size_dest;
	size_t	size_src;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	dest_in = size_dest;
	if (destsize > size_dest)
	{
		while (i < destsize - size_dest - 1 && src[i] != '\0')
		{
			dest[dest_in] = src[i];
			dest_in ++;
			i ++;
		}
		dest[dest_in] = '\0';
		return (size_dest + size_src);
	}
	return (destsize + size_src);
}

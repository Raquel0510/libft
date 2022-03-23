/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:43:38 by rneves-c          #+#    #+#             */
/*   Updated: 2022/02/19 19:43:38 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strnstr() function locates the	first occurrence of the	null-terminated
string little in the	string big, where not more than	len characters
are searched.  Characters that appear after a `\0'	character are not
searched.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	i2;

	i = 0;
	if (*small == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		i2 = i;
		while (big[i2] == small[j] && i2 < len && small[j] != '\0')
		{
			i2 ++;
			j ++;
		}
		if (j == ft_strlen(small))
			return ((char *)&big[i]);
		i ++;
	}
	return (NULL);
}

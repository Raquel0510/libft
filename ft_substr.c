/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:03:37 by rneves-c          #+#    #+#             */
/*   Updated: 2022/02/21 17:03:37 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if ((start + len - 1) < ft_strlen(s))
	{
		substr = (char *)malloc((len + 1) * sizeof(char));
	}
	else
		substr = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (((char *)s)[start] != '\0' && i < len)
	{
		substr[i] = ((char *)s)[start];
		i ++;
		start ++;
	}
	substr[i] = '\0';
	return (substr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:12:29 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/02 19:12:29 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Applies the function ’f’ to each character of thestring ’s’, and 
passing its index as first argumentto create a new string (with malloc(3)) 
resultingfrom successive applications of ’f’.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	char	*new;
	int		i;

	i = 0;
	if (!s || !f)
		return (ft_strdup(""));
	size = ft_strlen(s);
	new = (char *)malloc((size + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f((unsigned int)i, s[i]);
		i ++;
	}
	new[i] = '\0';
	return (new);
}

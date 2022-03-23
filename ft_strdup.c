/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 22:43:01 by rneves-c          #+#    #+#             */
/*   Updated: 2022/02/20 22:43:01 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function returns a pointer to a null-terminated byte string, 
which is a duplicate of the string pointed to by s.
*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	int		i;
	char	*new;

	i = 0;
	len = ft_strlen(str);
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (str[i] != '\0')
	{
		new[i] = str[i];
		i ++;
	}
	new[i] = '\0';
	return (new);
}

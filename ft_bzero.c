/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:12:36 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/03 17:43:13 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The bzero() function erases the data in the n bytes of the memory
starting at the location pointed to by str, by writing zeros (bytes
containing '\0') to that area.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = '\0';
		i ++;
	}
}

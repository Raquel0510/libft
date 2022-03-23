/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:11:47 by rneves-c          #+#    #+#             */
/*   Updated: 2022/02/20 20:11:47 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The C library function void *calloc(size_t nitems, size_t size) 
allocates the requested memory and returns a pointer to it. The 
difference in malloc and calloc is that malloc does not set the 
memory to zero where as calloc sets allocated memory to zero.
*/

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	while (i < nitems * size)
	{
		((unsigned char *)ptr)[i] = '\0';
		i ++;
	}
	return (ptr);
}

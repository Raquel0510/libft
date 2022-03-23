/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:27:22 by rneves-c          #+#    #+#             */
/*   Updated: 2022/02/15 16:34:01 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	t;
	int		i;

	t = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i ++;
		t ++;
	}
	return (t);
}
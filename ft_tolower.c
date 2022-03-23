/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:55:17 by rneves-c          #+#    #+#             */
/*   Updated: 2022/02/18 10:55:17 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The tolower() function takes an uppercase alphabet 
and convert it to a lowercase character.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

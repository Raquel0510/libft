/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:34:20 by rneves-c          #+#    #+#             */
/*   Updated: 2022/02/18 10:34:20 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The toupper() function converts a lowercase 
alphabet to an uppercase alphabet.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

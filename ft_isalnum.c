/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:11:43 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/03 17:43:11 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
The isalnum() function checks whether the argument passed 
is an alphanumeric character (alphabet or number) or not.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

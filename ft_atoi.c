/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:58:13 by rneves-c          #+#    #+#             */
/*   Updated: 2022/02/20 16:58:13 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The atoi() function converts a character string to an integer value.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long int	nbr;

	sign = 1;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str ++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str ++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr = nbr * 10 + (*str - 48);
		str ++;
	}
	return (nbr * sign);
}

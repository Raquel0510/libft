/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:08:59 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/02 18:08:59 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a stringrepresenting 
the integer received as an argument.Negative numbers must be handled.
*/

#include "libft.h"

static int	ft_size_number(int n);
static void	ft_turn_positive(int *n, int *size, int *sign);

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*nbr;

	sign = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_size_number(n);
	if (n < 0)
		ft_turn_positive(&n, &size, &sign);
	nbr = (char *)malloc((size + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	nbr[size] = '\0';
	while (--size >= 0)
	{
		nbr[size] = (n % 10) + 48;
		n = n / 10;
	}
	if (sign == -1)
		nbr[0] = '-';
	return (nbr);
}

static void	ft_turn_positive(int *n, int *size, int *sign)
{
	*size += 1;
	*n = *n / -1;
	*sign = -1;
}

static int	ft_size_number(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		size ++;
	}
	return (size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:14:57 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/24 10:37:20 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Outputs the integer ’n’ to the given filedescriptor.
*/

#include "libft.h"

static int	ft_power(int exp);
static int	ft_size_nbr(unsigned int n);

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;
	int				size;
	char			c;

	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = n * -1;
	}
	else
		nbr = n;
	size = ft_size_nbr(nbr) - 1;
	while (size >= 0)
	{
		c = (nbr / ft_power(size)) + 48;
		write(fd, &c, 1);
		nbr = nbr % ft_power(size);
		size --;
	}
}

static int	ft_power(int exp)
{
	int	nbr;

	if (exp == 0)
		return (1);
	nbr = 10;
	while (--exp > 0)
	{
		nbr = nbr * 10;
	}
	return (nbr);
}

static int	ft_size_nbr(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		size ++;
		n = n / 10;
	}
	return (size);
}

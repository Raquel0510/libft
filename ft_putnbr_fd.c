/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:14:57 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/23 21:43:18 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Outputs the integer ’n’ to the given filedescriptor.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;
	int		i;

	nbr = ft_itoa(n);
	i = 0;
	while (nbr[i] != '\0')
	{
		write(fd, &nbr[i], 1);
		i ++;
	}
	free (nbr);
}

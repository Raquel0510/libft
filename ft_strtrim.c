/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:36:41 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/02 11:36:41 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a copy of’s1’ with the characters 
specified in ’set’ removedfrom the beginning and the end of the string.
*/

#include "libft.h"

static int	ft_check_set(char c, char const *set);
static int	ft_check_start(char const *s1, char const *set);
static int	ft_check_end(char const *s1, char const *set, int start);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	start = ft_check_start(s1, set);
	end = ft_check_end(s1, set, start);
	i = 0;
	new = (char *)malloc((end - start + 2) * sizeof(char));
	if (!new)
		return (NULL);
	while (start <= end)
	{
		new[i] = s1[start];
		i ++;
		start ++;
	}
	new[i] = '\0';
	return (new);
}

static int	ft_check_start(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_check_set(s1[start], set) == 1 && (start <= end))
		start ++;
	return (start);
}

static int	ft_check_end(char const *s1, char const *set, int start)
{
	int	end;

	end = ft_strlen(s1) - 1;
	while (ft_check_set(s1[end], set) == 1 && (end > start))
		end --;
	return (end);
}

static int	ft_check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

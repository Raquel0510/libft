/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:47:56 by rneves-c          #+#    #+#             */
/*   Updated: 2022/03/02 12:47:56 by rneves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns an arrayof strings obtained by splitting 
’s’ using thecharacter ’c’ as a delimiter. The array must endwith a NULL pointer.
*/

#include "libft.h"

static int	ft_words(char const *s, char c);
static int	ft_word_len(char const *s, char c);
static void	ft_populate_array(char **array, char c, char const *s, int words);

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**array;

	if (!s)
		return (NULL);
	words = ft_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	ft_populate_array(array, c, s, words);
	return (array);
}

static void	ft_populate_array(char **array, char c, char const *s, int words)
{
	int		i;
	int		j;
	int		l;
	char	*temp;

	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i ++;
		temp = (char *)malloc(ft_word_len(&s[i], c) * sizeof(char));
		if (!temp)
			return ;
		l = 0;
		while (s[i] != '\0' && s[i] != c && i < (int)ft_strlen(s))
		{
			temp[l++] = s[i++];
		}
		temp[l] = '\0';
		i ++;
		array[j] = temp;
		j ++;
	}
	array[j] = NULL;
}

static int	ft_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s[i] != c && s[i] != '\0')
		words ++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words ++;
		i ++;
	}
	return (words);
}

static int	ft_word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len ++;
	return (len + 1);
}

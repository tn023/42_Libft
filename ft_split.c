/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:55:56 by marneves          #+#    #+#             */
/*   Updated: 2022/11/21 20:35:28 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Splits a string using the delimiter 'c'.
 * @param s
 * @param c
 * @return A null-terminated two dimensional array of the split substrings
*/

int	count_strs(char const *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

static int	count_char_str(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char	**str_free(char **substrs)
{
	int	i;

	i = 0;
	while (substrs[i])
	{
		free(substrs[i]);
		i++;
	}
	free(substrs);
	return (0);
}

static char	**ft_substrs(char const *s, char **substrs, char c, int nbstrs)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < nbstrs)
	{
		k = 0;
		while (s[i] == c)
			i++;
		substrs[j] = (char *)malloc(sizeof(char)
				* (count_char_str(s, c, i) + 1));
		if (substrs[j] == NULL)
			return (str_free(substrs));
		while (s[i] != '\0' && s[i] != c)
			substrs[j][k++] = s[i++];
		substrs[j++][k] = '\0';
	}
	substrs[j] = NULL;
	return (substrs);
}

char	**ft_split(char const *s, char c)
{
	char	**substrs;
	int		nbstrs;

	if (!s)
		return (0);
	nbstrs = count_strs (s, c);
	substrs = (char **)malloc(sizeof(char *) * (nbstrs + 1));
	if (substrs == NULL)
		return (0);
	return (ft_substrs(s, substrs, c, nbstrs));
}

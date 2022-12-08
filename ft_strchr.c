/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:44:53 by marneves          #+#    #+#             */
/*   Updated: 2022/11/18 20:26:54 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Finds the first occurrence of `c` in the string `s`.
 * @param s
 * @param c
 * @return A pointer to the character, if found, else NULL
 */

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(s);
	while (i < size + 1)
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

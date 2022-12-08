/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:05:58 by marneves          #+#    #+#             */
/*   Updated: 2022/11/18 20:31:31 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Finds the last occurrence of the char `c` in the string `s`.
 * @param s
 * @param c
 * @return A pointer to the character in the string, if found, else, NULL
 */

char	*ft_strrchr(const char *s, int c)
{
	char	*index;
	int		i;

	i = 0;
	index = NULL;
	while (s[i] != '\0')
	{
		if ((char)c == s[i])
			index = (char *)&s[i];
		i++;
	}
	if ((char) c == s[i])
		index = (char *)&s[i];
	return (index);
}

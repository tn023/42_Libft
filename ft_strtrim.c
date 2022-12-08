/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:31:43 by marneves          #+#    #+#             */
/*   Updated: 2022/11/21 20:21:19 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Trims a string of characters from `set`.
 * @param str The string to be trimmed
 * @param set The set of characters to be trimmed off the string
 * @return The allocated trimmed string
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	start = 0;
	len = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	len = ft_strlen(&s1[start]);
	if (len > 0)
	{
		while (s1[start + len - 1] && ft_strrchr(set, s1[start + len - 1]))
			len--;
	}
	return (ft_substr(s1, start, len));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:34:42 by marneves          #+#    #+#             */
/*   Updated: 2022/11/21 21:31:52 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Retrieves a substring of the string `s`.
 * @param s
 * @param start The starting index of the substring
 * @param len The length of the substring
 * @return The allocated substring
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			slen;
	unsigned int	i;

	if (s == NULL)
		return (0);
	slen = ft_strlen((char *)s);
	if (start > slen)
		start = slen;
	if (len > (slen - start))
		len = (slen - start);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (0);
	i = 0;
	if (start < slen)
	{
		while (i < len && s[start] != '\0')
			sub[i++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}

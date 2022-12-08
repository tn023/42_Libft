/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:26:21 by marneves          #+#    #+#             */
/*   Updated: 2022/11/18 20:27:44 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends a string into another one. It appends up to `size -
 * strlen(dest) - 1` bytes.
 * @param dest The destination string, needs to be allocated
 * @param src The string to be copied
 * @param size The size to be copied
 * @return The copied size of the string
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize <= dstlen)
		return (dstsize + ft_strlen((char *)src));
	while (src[i] != '\0' && dstlen + i < (dstsize -1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (ft_strlen((char *)src) + dstlen);
}

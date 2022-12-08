/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:11:17 by marneves          #+#    #+#             */
/*   Updated: 2022/11/18 20:24:41 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Scans a memory area for a byte `c`.
 * @param s A pointer to the memory area. It is interpreted as an `unsigned
 * char *`
 * @param c The target byte. Is is interpreted as an `unsigned char `.
 * @param n The size of the memory area to be scanned
 * @return A pointer to the byte, if found, else, `NULL`.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned const char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

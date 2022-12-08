/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:29:01 by marneves          #+#    #+#             */
/*   Updated: 2022/11/18 20:25:49 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies up to `n` bytes of from memory area `src` to memory area `dst`.
 * @param dst The destination memory area
 * @param src The source memory area
 * @param n The maximum number of bytes to be copied
 * @return A pointer to the copied area
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
	i++;
	}
	return (dst);
}

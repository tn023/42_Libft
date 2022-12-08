/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:46:24 by marneves          #+#    #+#             */
/*   Updated: 2022/11/18 20:21:13 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory and sets it to zero.
 * @param nmemb The number of elements to allocate to
 * @param size The number of bytes to allocate for each member
 * @return A pointer to the allocated memory
 */

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	total_size;

	total_size = size * count;
	dst = malloc(total_size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, total_size);
	return (dst);
}

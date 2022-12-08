/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:29:10 by marneves          #+#    #+#             */
/*   Updated: 2022/11/18 20:26:17 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets `n` bytes of memory area `s` to the character `c`.
 * @param s
 * @param c
 * @param n
 * @return A pointer to the start of the set memory area
 */

void	*ft_memset(void *b, int c, size_t len)
{
	char	*newb;

	newb = (char *)b;
	while (len > 0)
	{
		newb[len -1] = c;
		len--;
	}
	return (b);
}

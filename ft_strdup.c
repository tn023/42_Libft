/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:08:52 by marneves          #+#    #+#             */
/*   Updated: 2022/11/21 20:24:48 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a string to a new allocated string.
 * @param s1 The string to be copied.
 * @return The new allocated string.
*/

char	*ft_strdup(const char *s1)
{
	char	*dststr;

	dststr = (char *)malloc(ft_strlen(s1) + 1);
	if (dststr == NULL)
		return (0);
	ft_memcpy(dststr, s1, ft_strlen(s1) + 1);
	return (dststr);
}

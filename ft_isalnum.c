/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:27:58 by marneves          #+#    #+#             */
/*   Updated: 2022/11/18 20:21:31 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character `c` is an alphabetic
 * character or a digit.
 * @param c
 * @return A non-zero value if it is either an alphabetic
 * characetr or a digit
 */

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

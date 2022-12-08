/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:09:30 by marneves          #+#    #+#             */
/*   Updated: 2022/11/21 20:34:31 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an integer value `n` to a string.
 * @param n
 * @return The string form of the integer `n`
 */

static size_t	count_size(int n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char	*int_min(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	return (0);
}

static int	n_sign(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = count_size(n);
	if (n == -2147483648 || n == 0)
	{
		str = int_min(n);
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	str[len] = '\0';
	if (n < 0)
	{
		n = n_sign(n);
		str[0] = '-';
	}
	while (n != 0)
	{
		len--;
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

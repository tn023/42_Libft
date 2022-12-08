/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:14:56 by marneves          #+#    #+#             */
/*   Updated: 2022/11/21 20:33:15 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a number on a file descriptor.
 * @param n
 * @param fd
 */

void	ft_putnbr_fd(int n, int fd)
{
	long int	number;

	number = (long int)n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = number * -1;
	}
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd((number % 10) + '0', fd);
}

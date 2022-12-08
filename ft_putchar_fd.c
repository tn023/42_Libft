/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:13:11 by marneves          #+#    #+#             */
/*   Updated: 2022/11/18 21:18:11 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a character on a file descriptor.
 * @param c
 * @param fd
 */

void	ft_putchar_fd(char c, int fd)
{
	(void)write(fd, &c, 1);
}

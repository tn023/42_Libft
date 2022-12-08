/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:11:59 by marneves          #+#    #+#             */
/*   Updated: 2022/11/18 20:19:23 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Maps a funtion to a string and returns the resulting string.
 * @param s The string to be mapped
 * @param f The map function to build the new string
 * @return The allocated new string
 *
 * map is a higher order function that applies a given function to each
 * char of the string
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	size;
	size_t	i;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	res = malloc(size + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

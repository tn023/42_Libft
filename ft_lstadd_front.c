/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:57:30 by marneves          #+#    #+#             */
/*   Updated: 2022/11/21 20:06:30 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the node ’new’ at the beginning of the list.
 * @param lst The address of a pointer to the first link of
 * a list.
 * @param new The address of a pointer to the node to be
 * added to the list.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (lst == NULL)
	{
		*lst = new;
		return ;
	}
	new -> next = *lst;
	*lst = new;
}

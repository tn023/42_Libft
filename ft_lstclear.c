/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:09:03 by marneves          #+#    #+#             */
/*   Updated: 2022/11/21 20:33:48 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees the given node and every
 * successor of that node, using the function ’del’
 * and free.
 * Finally, the pointer to the list must be set to
 * NULL.
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete
 * the content of the node.
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	if (lst == NULL || *lst == NULL)
		return ;
	while (*lst)
	{
		last = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = last;
	}
	*lst = NULL;
}

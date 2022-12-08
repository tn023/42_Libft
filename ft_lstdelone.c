/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlstdelone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:06:47 by marneves          #+#    #+#             */
/*   Updated: 2022/11/21 20:07:35 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Takes as a parameter a node and frees the memory of
 * the node’s content using the function ’del’ given
 * as a parameter and free the node. The memory of
 * ’next’ must not be freed.
 * @param lst The node to free.
 * @param del The address of the function used to delete
 * the content.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

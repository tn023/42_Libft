/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marneves <marneves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:54:08 by marneves          #+#    #+#             */
/*   Updated: 2022/11/21 20:11:12 by marneves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and returns a new node.
 * The member variable ’content’ is initialized with
 * the value of the parameter ’content’. The variable
 * ’next’ is initialized to NULL.
 * @param content The content to create the node with.
 * @return a new node.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	newlst = ft_calloc(1, sizeof(t_list));
	if (newlst == NULL)
		return (NULL);
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}

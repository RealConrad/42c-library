/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:13:00 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 14:23:34 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_linked_lists.h"

/**
** @brief Allocates (with malloc(3)) and returns a new node.
**	The member variable ’content’ is initialized with
**	the value of the parameter ’content’. The variable
**	’next’ is initialized to NULL
** @param content The content to create the node with.
** @return The new node
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		node->content = content;
		node->next = NULL;
	}
	return (node);
}

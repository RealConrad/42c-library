/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:12:03 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 14:20:42 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_linked_lists.h"

/**
** @brief Adds the node ’new’ at the beginning of the list.
** @param lst The address of a pointer to the first link of
**	a list.
** @param new The address of a pointer to the node to be
**	added to the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

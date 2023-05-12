/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 09:57:13 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 14:21:30 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_linked_lists.h"

/**
** @brief Takes as a parameter a node and frees the memory of the nodes
**	content using the function 'del'. The memory of 'next' must not be freed
** @param lst The node to free.
** @param del The address of the function used to delete
**	the content.
** @return None
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
		del(lst->content);
	free(lst);
}

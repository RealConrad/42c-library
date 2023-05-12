/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:15:30 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 14:23:21 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_linked_lists.h"

/**
** @brief Iterates through a linked list and applies the function 'f'
**	on each node. Creates a new list from the successful applications
**	from 'f'. 'del' is used to delete the content of a node if
**	necessary
** @param lst Address to the node
** @param f Address of the function to iterate on the list
** @param del Address of the function to delete the node if necessary
** @return The new list or NULL if allocation fails
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	void	*new;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new = f(lst->content);
		if (!new)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, ft_lstnew(new));
		lst = lst->next;
	}
	return (new_list);
}
